/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient
-(BOOL)removePhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeAndDeletePhotoLibraryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(id)activePhotoLibraries:(id*)arg1 ;
-(BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
@end

