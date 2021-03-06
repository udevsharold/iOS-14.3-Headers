/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSChronoWidgetServiceClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol CHSChronoWidgetServiceServer;
@class NSDictionary, NSMutableSet, NSSet, NSString;

@interface CHSAvocadoDescriptorProvider : NSObject <CHSChronoWidgetServiceClient, BSDescriptionProviding> {

	NSDictionary* _descriptorsByExtensionIdentifier;
	NSMutableSet* _observers;
	id<CHSChronoWidgetServiceServer> _server;

}

@property (nonatomic,copy) NSDictionary * descriptorsByExtensionIdentifier;              //@synthesize descriptorsByExtensionIdentifier=_descriptorsByExtensionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observers;                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<CHSChronoWidgetServiceServer> server;                  //@synthesize server=_server - In the implementation block
@property (nonatomic,copy,readonly) NSSet * descriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)descriptors;
-(id)initWithServer:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSMutableSet *)observers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)avocadoDescriptorsDidChange:(id)arg1 ;
-(id<CHSChronoWidgetServiceServer>)server;
-(void)addObserver:(id)arg1 ;
-(id)descriptorForPersonality:(id)arg1 ;
-(id)_descriptionForArray:(id)arg1 name:(id)arg2 ;
-(void)_mainQueue_handleNewDescriptors:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(void)_sendApplicationWithBundleIdentifierEnteredForeground:(id)arg1 ;
-(void)setDescriptorsByExtensionIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)descriptorsByExtensionIdentifier;
@end

