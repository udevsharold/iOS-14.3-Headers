/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookUtility/BUZipArchive.h>

@class BUZipArchive, BUZipEntry;

@interface BUContainedZipArchive : BUZipArchive {

	BUZipArchive* _zipArchive;
	BUZipEntry* _entry;

}
+(id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isValid;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 ;
@end
