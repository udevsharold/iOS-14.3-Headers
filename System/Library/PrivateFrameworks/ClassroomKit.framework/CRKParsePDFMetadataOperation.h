/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation {

	BOOL _parseImage;
	CRKBook* _book;
	NSString* _filePath;

}

@property (nonatomic,readonly) CRKBook * book;                   //@synthesize book=_book - In the implementation block
@property (nonatomic,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL parseImage;                  //@synthesize parseImage=_parseImage - In the implementation block
-(NSString *)filePath;
-(CRKBook *)book;
-(void)main;
-(id)fileName;
-(id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3 ;
-(void)updateTitleWithDictionaryRef:(CGPDFDictionaryRef)arg1 ;
-(BOOL)parseImage;
-(id)titleFromDictionaryRef:(CGPDFDictionaryRef)arg1 ;
@end

