/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIResponder;

@interface _UIResponder_Override_Host : NSObject {

	NSMutableArray* _overrides;
	UIResponder* _owner;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;              //@synthesize owner=_owner - In the implementation block
+(id)hostForResponder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)typesForResponder:(id)arg1 ;
-(void)attachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(void)detachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(id)description;
-(UIResponder *)owner;
@end

