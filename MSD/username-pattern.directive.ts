import { Directive } from '@angular/core'
import { NG_VALIDATORS, Validator, AbstractControl } from '@angular/forms'
@Directive({
    selector: '[appUsernamePattern]',
    providers: [
        { provide: NG_VALIDATORS, useExisting: UsernamePatternDirective, multi: true }
    ]
})
export class UsernamePatternDirective implements Validator {
    validate(control: AbstractControl): { [key: string]: any } | null {
        const pattern = /^[A-Za-z0-9]{5, 25}$/;
        return pattern.test(control.value) ? null : { invalidUsername: true }
    }
}




