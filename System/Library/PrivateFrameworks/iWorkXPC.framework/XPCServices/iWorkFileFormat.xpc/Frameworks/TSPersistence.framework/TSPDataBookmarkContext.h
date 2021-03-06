/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TSUManagedTemporaryDirectory, NSMutableDictionary, NSObject;

@interface TSPDataBookmarkContext : NSObject {

	TSUManagedTemporaryDirectory* _temporaryDirectory;
	NSMutableDictionary* _bookmarkDataURLsForFilenames;
	NSMutableDictionary* _digestStringsForFilenames;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(unsigned long long)arg3 error:(out id*)arg4 ;
-(BOOL)bookmarkDataNeedsWriteForData:(id)arg1 ;
-(BOOL)isEncryptedDataStorate:(id)arg1 ;
@end

