/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@interface wspFreeCursorIn : NSObject {

	SCD_Struct_ws1 msghdr;
	unsigned _cursorToFree;

}

@property (assign) unsigned cursorToFree;              //@synthesize cursorToFree=_cursorToFree - In the implementation block
-(id)initWithCursor:(unsigned)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(unsigned)cursorToFree;
-(void)setCursorToFree:(unsigned)arg1 ;
@end

