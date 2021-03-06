/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSString, NSMutableArray;

@interface MSVZipArchive : NSObject {

	BOMSysRef _bomsys;
	NSString* _archivePath;
	NSMutableArray* _filesToArchive;

}
-(id)init;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)dealloc;
-(void)addFileAtPath:(id)arg1 ;
-(BOOL)writeToFileAtPath:(id)arg1 withError:(id*)arg2 ;
-(BOOL)decompressToPath:(id)arg1 withError:(id*)arg2 ;
@end

