/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject {

	long long _componentID;
	BiometricKitEnrollProgressCoordinates* _transformationCoordinates;

}

@property (assign,nonatomic) long long componentID;                                                          //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) BiometricKitEnrollProgressCoordinates * transformationCoordinates;              //@synthesize transformationCoordinates=_transformationCoordinates - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)componentID;
-(void)setComponentID:(long long)arg1 ;
-(void)setTransformationCoordinates:(BiometricKitEnrollProgressCoordinates *)arg1 ;
-(BiometricKitEnrollProgressCoordinates *)transformationCoordinates;
@end
