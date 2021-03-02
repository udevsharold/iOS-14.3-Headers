/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdResourceInternalServiceProtocol <NSObject>
@required
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)batchSaveAssetJobs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)purgeExpiredOutboundSharingAssetsWithReply:(/*^block*/id)arg1;

@end
