/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TPSDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _context;

}

@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * context;                       //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_knowledgeStore;
-(NSString *)identifier;
-(void)setContext:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)context;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 ;
-(id)_discoverabilitySignalsStream;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
@end

