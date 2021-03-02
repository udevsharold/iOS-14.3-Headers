/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILibArchiveStreamingReader, NSString;

@interface _UIArchiveListingController : NSObject {

	_UILibArchiveStreamingReader* _archiveReader;
	BOOL _isValidArchive;
	BOOL _excludeDotFilesFromResults;
	NSString* _archivePath;
	long long _appleDoubleIdentificationType;

}

@property (nonatomic,readonly) NSString * archivePath;                             //@synthesize archivePath=_archivePath - In the implementation block
@property (assign,nonatomic) long long appleDoubleIdentificationType;              //@synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType - In the implementation block
@property (assign,nonatomic) BOOL excludeDotFilesFromResults;                      //@synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults - In the implementation block
-(void)dealloc;
-(id)initWithArchivePath:(id)arg1 ;
-(long long)appleDoubleIdentificationType;
-(BOOL)_shouldVisitItem:(id)arg1 ;
-(BOOL)determineIsReadableArchive;
-(BOOL)excludeDotFilesFromResults;
-(BOOL)enumerateLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setExcludeDotFilesFromResults:(BOOL)arg1 ;
-(NSString *)archivePath;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
@end
