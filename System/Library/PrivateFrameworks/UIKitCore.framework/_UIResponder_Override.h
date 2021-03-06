/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIResponder;

@interface _UIResponder_Override : NSObject {

	UIResponder* _owner;
	UIResponder* _target;
	long long _types;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long types;                          //@synthesize types=_types - In the implementation block
+(id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3 ;
-(void)dealloc;
-(long long)types;
-(UIResponder *)target;
-(id)description;
-(UIResponder *)owner;
@end

