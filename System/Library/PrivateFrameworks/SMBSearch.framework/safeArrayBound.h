/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface safeArrayBound : NSObject {

	unsigned _cElements;
	unsigned _lowBound;

}

@property (assign) unsigned cElements;              //@synthesize cElements=_cElements - In the implementation block
@property (assign) unsigned lowBound;               //@synthesize lowBound=_lowBound - In the implementation block
-(id)initWithElements:(unsigned)arg1 LowBound:(unsigned)arg2 ;
-(unsigned)cElements;
-(void)setCElements:(unsigned)arg1 ;
-(unsigned)lowBound;
-(void)setLowBound:(unsigned)arg1 ;
@end
