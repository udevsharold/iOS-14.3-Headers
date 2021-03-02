/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString, NSArray;

@interface NSNetService : NSObject {

	id _netService;
	id _delegate;
	id _reserved;

}

@property (assign) id<NSNetServiceDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * hostName; 
@property (copy,readonly) NSArray * addresses; 
@property (readonly) long long port; 
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
+(id)dataFromTXTRecordDictionary:(id)arg1 ;
-(long long)port;
-(void)publish;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)init;
-(void)startMonitoring;
-(id)TXTRecordData;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(BOOL)setTXTRecordData:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(void)dealloc;
-(NSArray *)addresses;
-(void)stopMonitoring;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(BOOL)includesPeerToPeer;
-(void)publishWithOptions:(unsigned long long)arg1 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(NSString *)domain;
-(id)description;
-(NSString *)hostName;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)resolve;
-(NSString *)name;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(void)stop;
-(id<NSNetServiceDelegate>)delegate;
@end
