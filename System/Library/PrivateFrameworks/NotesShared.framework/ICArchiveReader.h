/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface ICArchiveReader : NSObject {

	archiveRef _archive;
	NSString* _sourcePath;
	NSString* _destinationPath;

}

@property (nonatomic,retain) NSString * sourcePath;                   //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
-(NSString *)sourcePath;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(BOOL)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id*)arg3 error:(id*)arg4 ;
-(id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(BOOL)unarchiveResultURLs:(id*)arg1 error:(id*)arg2 ;
@end

