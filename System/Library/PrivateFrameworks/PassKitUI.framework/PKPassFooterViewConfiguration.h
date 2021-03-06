/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPassView, PKPass;

@interface PKPassFooterViewConfiguration : NSObject {

	PKPassView* _passView;
	long long _state;

}

@property (nonatomic,readonly) PKPassView * passView;              //@synthesize passView=_passView - In the implementation block
@property (nonatomic,readonly) long long state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) PKPass * pass; 
-(id)init;
-(PKPassView *)passView;
-(long long)state;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPassView:(id)arg1 state:(long long)arg2 ;
-(PKPass *)pass;
@end

