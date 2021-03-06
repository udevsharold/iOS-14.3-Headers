/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForNotebookItemsIntentExport.h>

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * title; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,readonly) long long itemType; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) CLPlacemark * location; 
@property (nonatomic,readonly) long long locationSearchType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTime; 
@property (nonatomic,readonly) long long dateSearchType; 
@property (nonatomic,readonly) unsigned long long temporalEventTriggerTypes; 
@property (nonatomic,readonly) long long taskPriority; 
@property (nonatomic,copy,readonly) NSString * notebookItemIdentifier; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)content;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9 ;
-(void)setContent:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11 ;
-(INDateComponentsRange *)dateTime;
-(id)_metadata;
-(INSpeakableString *)groupName;
-(long long)status;
-(void)setItemType:(long long)arg1 ;
-(CLPlacemark *)location;
-(long long)itemType;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setDateTime:(INDateComponentsRange *)arg1 ;
-(void)setLocation:(CLPlacemark *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)locationSearchType;
-(void)setLocationSearchType:(long long)arg1 ;
-(void)setDateSearchType:(long long)arg1 ;
-(long long)taskPriority;
-(long long)dateSearchType;
-(unsigned long long)temporalEventTriggerTypes;
-(void)setTemporalEventTriggerTypes:(unsigned long long)arg1 ;
-(void)setTaskPriority:(long long)arg1 ;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1 ;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(NSString *)arg1 ;
-(void)setTitle:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setStatus:(long long)arg1 ;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(INSpeakableString *)title;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 ;
@end

