/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaDaemon/iCloudQuotaDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying> {

	BOOL _deviceStorageAlmostFull;
	BOOL _photosCloudEnabled;
	BOOL _photosOptimizeEnabled;
	NSNumber* _photosLibrarySize;

}

@property (assign,getter=isDeviceStorageAlmostFull,nonatomic) BOOL deviceStorageAlmostFull;              //@synthesize deviceStorageAlmostFull=_deviceStorageAlmostFull - In the implementation block
@property (assign,getter=isPhotosCloudEnabled,nonatomic) BOOL photosCloudEnabled;                        //@synthesize photosCloudEnabled=_photosCloudEnabled - In the implementation block
@property (assign,getter=isPhotosOptimizeEnabled,nonatomic) BOOL photosOptimizeEnabled;                  //@synthesize photosOptimizeEnabled=_photosOptimizeEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * photosLibrarySize;                                                 //@synthesize photosLibrarySize=_photosLibrarySize - In the implementation block
+(id)photosLibrarySize;
+(id)currentConditions;
+(BOOL)isDeviceStorageAlmostFull;
+(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
+(BOOL)isSimulatedDeviceStorageAlmostFull;
+(BOOL)isPhotosCloudEnabled;
+(BOOL)isPhotosOptimizeEnabled;
+(void)getPhotosLibrarySizeWithCompletion:(/*^block*/id)arg1 ;
+(void)getPhotosLibraryUploadSizeWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)hasPhotosCloudEverBeenEnabled;
+(id)photosLibraryUploadSize;
+(id)photosVideosCount;
+(BOOL)isDeviceStorageNearLowButNotLow;
+(BOOL)isCachedCloudQuotaAlmostFullOrFull;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)photosLibrarySize;
-(BOOL)isDeviceStorageAlmostFull;
-(id)initWithCurrentConditions;
-(void)setDeviceStorageAlmostFull:(BOOL)arg1 ;
-(BOOL)isPhotosCloudEnabled;
-(void)setPhotosCloudEnabled:(BOOL)arg1 ;
-(BOOL)isPhotosOptimizeEnabled;
-(void)setPhotosOptimizeEnabled:(BOOL)arg1 ;
-(void)setPhotosLibrarySize:(NSNumber *)arg1 ;
@end

