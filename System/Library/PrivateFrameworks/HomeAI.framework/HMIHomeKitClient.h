/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSOperationQueue, NSString;

@interface HMIHomeKitClient : HMFObject <HMFLogging> {

	BOOL _setup;
	NSArray* _homes;
	NSOperationQueue* _homeKitOperationQueue;
	unsigned long long _cachePolicy;

}

@property (readonly) NSOperationQueue * homeKitOperationQueue;              //@synthesize homeKitOperationQueue=_homeKitOperationQueue - In the implementation block
@property (getter=isSetup,readonly) BOOL setup;                             //@synthesize setup=_setup - In the implementation block
@property (readonly) unsigned long long cachePolicy;                        //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (readonly) NSArray * homes;                                       //@synthesize homes=_homes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isSetup;
-(unsigned long long)cachePolicy;
-(id)init;
-(BOOL)setup;
-(NSArray *)homes;
-(BOOL)isCurrentDevicePrimaryResident;
-(id)initWithCachePolicy:(unsigned long long)arg1 ;
-(NSOperationQueue *)homeKitOperationQueue;
-(id)initWithNoCaching;
-(id)homePersonManagerForHomeUUID:(id)arg1 ;
-(id)homeForHMPersonManagerUUID:(id)arg1 ;
-(id)homePersonManagersForCurrentDevice;
-(id)photosPersonManagerForHomeUUID:(id)arg1 sourceUUID:(id)arg2 ;
-(id)cameraProfileWithUUID:(id)arg1 ;
-(id)homeWithCameraProfileUUID:(id)arg1 ;
@end
