/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSURL;

@interface _PFEvanescentData : NSData {

	unsigned long long _length;
	NSURL* _fileURL;
	int _openfd;
	const void* _activeMap;
	int _mapRefCount;

}
+(Class)classForKeyedUnarchiver;
-(id)initWithPath:(id)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)getBytes:(void*)arg1 ;
-(const void*)bytes;
-(unsigned long long)hash;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)description;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)invalidate;
@end
