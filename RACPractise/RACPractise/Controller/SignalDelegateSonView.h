//
//  SignalDelegateSonView.h
//  RACPractise
//
//  Created by YiXue on 2018/2/26.
//  Copyright © 2018年 YiXue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ReactiveCocoa.h>
@interface SignalDelegateSonView : UIView
@property( nonatomic, strong) RACSubject *delegateSignal;

@end
