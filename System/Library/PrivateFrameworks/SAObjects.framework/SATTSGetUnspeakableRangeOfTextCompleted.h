/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * results; 
+(id)getUnspeakableRangeOfTextCompleted;
+(id)getUnspeakableRangeOfTextCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

