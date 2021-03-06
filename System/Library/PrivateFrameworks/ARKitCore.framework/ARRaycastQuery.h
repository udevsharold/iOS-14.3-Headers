/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARRaycastQuery : NSObject {

	long long _target;
	long long _targetAlignment;
	 _origin;
	 _direction;

}

@property (nonatomic,readonly)  origin;                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly)  direction;                             //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) long long target;                       //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long targetAlignment;              //@synthesize targetAlignment=_targetAlignment - In the implementation block
-()origin;
-()direction;
-(long long)target;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)targetAlignment;
-(id)initWithOrigin:(long long)arg1 direction:(long long)arg2 ;
@end

