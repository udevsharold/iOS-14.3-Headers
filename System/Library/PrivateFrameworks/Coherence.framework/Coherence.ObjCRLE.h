/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Coherence/Coherence-Structs.h>
@class NSString;

@interface Coherence.ObjCRLE : NSObject {

	??? rle;

}

@property (readonly,nonatomic) long long rangeCount; 
@property (readonly,nonatomic) NSString * description; 
-(long long)rangeCount;
-(id)init;
-(NSString *)description;
-(void)enumerateRangesIn:(NSRange)arg1 :(/*^block*/id)arg2 ;
-(void)addMappingFrom:(long long)arg1 to:(long long)arg2 ;
@end

