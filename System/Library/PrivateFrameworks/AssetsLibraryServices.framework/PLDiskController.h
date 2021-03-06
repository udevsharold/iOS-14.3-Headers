/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(id)sharedInstance;
+(long long)diskSpaceAvailableForUse;
+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
+(id)mountPointForPath:(id)arg1 ;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(long long)freeDiskSpaceThreshold;
-(void)_actuallyUpdateCookie;
-(id)init;
-(void)updateAvailableDiskSpace;
-(void)dealloc;
-(void)_updateCookie;
-(BOOL)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
-(void)_diskSpaceDidBecomeLow;
@end

