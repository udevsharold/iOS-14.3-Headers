/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUHasher : NSObject {

	unsigned long long _currentHash;

}

@property (assign,nonatomic) unsigned long long currentHash;              //@synthesize currentHash=_currentHash - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(unsigned long long)hashValue;
-(void)addInt:(int)arg1 ;
-(unsigned long long)currentHash;
-(void)setCurrentHash:(unsigned long long)arg1 ;
-(void)p_appendUnsignedInteger:(unsigned long long)arg1 ;
-(void)addUnsignedInt:(unsigned)arg1 ;
-(void)addBool:(BOOL)arg1 ;
-(void)addInteger:(long long)arg1 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 ;
@end

