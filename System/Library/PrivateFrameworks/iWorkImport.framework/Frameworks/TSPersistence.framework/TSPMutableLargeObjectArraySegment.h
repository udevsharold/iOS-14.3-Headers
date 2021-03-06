/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArraySegment.h>

@interface TSPMutableLargeObjectArraySegment : TSPAbstractMutableLargeArraySegment
-(void)saveToMessage:(LargeObjectArraySegment*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeObjectArraySegment*)arg1 unarchiver:(id)arg2 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
@end

