/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface NSArchiver : NSCoder {

	void* mdata;
	void* pointerTable;
	void* stringTable;
	void* ids;
	void* map;
	void* replacementTable;
	void* reserved;

}

@property (retain,readonly) NSMutableData * archiverData; 
+(void)initialize;
+(id)archivedDataWithRootObject:(id)arg1 ;
+(id)classNameEncodedForTrueClassName:(id)arg1 ;
+(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(id)data;
-(id)classNameEncodedForTrueClassName:(id)arg1 ;
-(NSMutableData *)archiverData;
-(void)dealloc;
-(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
@end

