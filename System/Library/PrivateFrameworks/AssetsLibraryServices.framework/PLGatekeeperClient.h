/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject {

	PLAssetsdClient* _assetsdClient;

}
+(id)sharedInstance;
-(void)getLibrarySizes:(/*^block*/id)arg1 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
@end
