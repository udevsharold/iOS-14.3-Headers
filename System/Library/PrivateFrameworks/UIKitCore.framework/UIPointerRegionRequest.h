/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIPointerRegionRequest : NSObject {

	long long _modifiers;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long modifiers;              //@synthesize modifiers=_modifiers - In the implementation block
-(long long)modifiers;
-(CGPoint)location;
-(id)description;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setModifiers:(long long)arg1 ;
@end

