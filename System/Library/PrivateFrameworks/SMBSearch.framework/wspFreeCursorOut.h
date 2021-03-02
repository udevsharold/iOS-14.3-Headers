/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class wspHeader;

@interface wspFreeCursorOut : NSObject {

	unsigned _cursorsRemaining;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;                       //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned cursorsRemaining;              //@synthesize cursorsRemaining=_cursorsRemaining - In the implementation block
-(id)init;
-(wspHeader *)whdr;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setCursorsRemaining:(unsigned)arg1 ;
-(unsigned)cursorsRemaining;
@end
