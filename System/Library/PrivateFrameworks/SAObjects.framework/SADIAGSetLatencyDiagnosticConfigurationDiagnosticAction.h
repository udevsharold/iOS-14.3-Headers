/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * uri; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setLatencyDiagnosticConfigurationDiagnosticAction;
+(id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)uri;
-(NSString *)verb;
-(void)setUri:(NSURL *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(id)encodedClassName;
@end
