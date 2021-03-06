/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFIVGenerator.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {

	id _incrementingIVGeneratorInternal;

}

@property (nonatomic,copy) NSData * messageID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMessageID:(NSData *)arg1 ;
-(id)initWithMessageID:(id)arg1 ;
-(id)initWithRandomMessageID;
-(id)generateIVWithLength:(long long)arg1 error:(id*)arg2 ;
-(NSData *)messageID;
@end

