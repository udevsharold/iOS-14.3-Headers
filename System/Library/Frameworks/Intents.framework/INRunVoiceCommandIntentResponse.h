/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentResponseExport.h>

@class NSString, NSNumber, NSDictionary, INArchivedObject, NSArray;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * appBundleId; 
@property (assign,nonatomic) long long intentCategory; 
@property (nonatomic,copy) NSNumber * customResponsesDisabled; 
@property (nonatomic,copy) NSString * responseTemplate; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) NSString * localizedAppName; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (assign,nonatomic) long long toggleState; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSNumber * interstitialDisabled; 
@property (nonatomic,copy) NSString * underlyingIntentTitle; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * prefersExecutionOnCompanion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1 ;
-(long long)code;
-(NSString *)verb;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)parameters;
-(NSArray *)steps;
-(id)init;
-(NSString *)responseTemplate;
-(INArchivedObject *)underlyingIntent;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(id)propertiesByName;
-(NSNumber *)customResponsesDisabled;
-(void)setCustomResponsesDisabled:(NSNumber *)arg1 ;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(NSNumber *)interstitialDisabled;
-(void)setInterstitialDisabled:(NSNumber *)arg1 ;
-(NSString *)underlyingIntentTitle;
-(void)setUnderlyingIntentTitle:(NSString *)arg1 ;
-(NSNumber *)prefersExecutionOnCompanion;
-(void)setPrefersExecutionOnCompanion:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)appBundleId;
-(long long)_codeWithName:(id)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(void)setPropertiesByName:(id)arg1 ;
-(NSString *)localizedAppName;
-(void)setResponseTemplate:(NSString *)arg1 ;
-(long long)toggleState;
-(void)setToggleState:(long long)arg1 ;
-(NSNumber *)continueRunning;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
