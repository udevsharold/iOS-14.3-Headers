/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface _PFVMData : NSData {

	int _cd_rc;
	unsigned long long _length;
	void* _payload;

}
+(Class)classForKeyedUnarchiver;
-(unsigned long long)length;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(BOOL)_tryRetain;
-(unsigned long long)retainCount;
-(const void*)bytes;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)retain;
-(oneway void)release;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
@end
