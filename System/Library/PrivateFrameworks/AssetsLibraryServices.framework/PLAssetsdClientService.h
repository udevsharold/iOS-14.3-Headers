/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdClientServiceProtocol.h>

@class NSMutableArray, NSString;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {

	NSMutableArray* _libraryUnavailabilityHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 ;
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5 ;
@end
