//
//  A0RecoverPasswordView.h
//  Pods
//
//  Created by Hernan Zalazar on 7/14/14.
//
//

#import <UIKit/UIKit.h>

#import "A0KeyboardEnabledView.h"

@class A0ChangePasswordCredentialValidator;

typedef void(^A0RecoverPasswordBlock)(NSString *username, NSString *newPassword);
typedef void(^A0CancelBlock)();

@interface A0RecoverPasswordView : UIView<A0KeyboardEnabledView>

@property (copy, nonatomic) A0RecoverPasswordBlock recoverBlock;
@property (copy, nonatomic) A0CancelBlock cancelBlock;

@property (strong, nonatomic) A0ChangePasswordCredentialValidator *validator;

@property (weak, nonatomic) IBOutlet UITextField *userTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;
@property (weak, nonatomic) IBOutlet UITextField *repeatPasswordTextField;
@property (weak, nonatomic) IBOutlet UIButton *recoverButton;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;


@end