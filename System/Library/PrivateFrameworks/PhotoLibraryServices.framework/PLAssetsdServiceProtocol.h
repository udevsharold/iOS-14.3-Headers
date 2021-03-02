/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
@required
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 clientOptions:(id)arg3 withReply:(/*^block*/id)arg4;

@end
