/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _delimiter;
	NSData* _primaryIdentifier;
	NSMutableArray* _secondaryIdentifier;

}

@property (nonatomic,retain) NSData * delimiter;                                //@synthesize delimiter=_delimiter - In the implementation block
@property (nonatomic,retain) NSData * primaryIdentifier;                        //@synthesize primaryIdentifier=_primaryIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)primaryIdentifier;
-(NSData *)delimiter;
-(void)setDelimiter:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)secondaryIdentifier;
-(void)setSecondaryIdentifier:(NSMutableArray *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setPrimaryIdentifier:(NSData *)arg1 ;
-(id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 ;
@end

