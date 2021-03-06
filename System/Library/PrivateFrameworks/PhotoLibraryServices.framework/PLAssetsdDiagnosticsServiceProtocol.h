/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
@required
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1;
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2;

@end

