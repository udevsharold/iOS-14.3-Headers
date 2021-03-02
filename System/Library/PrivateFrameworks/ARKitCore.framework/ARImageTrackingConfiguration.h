/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration {

	NSSet* _trackingImages;
	long long _maximumNumberOfTrackedImages;

}

@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (nonatomic,copy) NSSet * trackingImages;                                         //@synthesize trackingImages=_trackingImages - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                       //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)maximumNumberOfTrackedImages;
-(NSSet *)trackingImages;
-(void)createTechniques:(id)arg1 ;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setTrackingImages:(NSSet *)arg1 ;
@end
