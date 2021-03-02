/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ARFaceTrackingManager : NSObject {

	NSUUID* _singleUserAnchorIdentifier;
	long long _maximumNumberOfTrackedFaces;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(void)initialize;
+(BOOL)isSupported;
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2 ;
-(id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end
