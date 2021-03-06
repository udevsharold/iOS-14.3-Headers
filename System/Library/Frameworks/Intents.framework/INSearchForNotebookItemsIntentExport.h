/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;


@protocol INSearchForNotebookItemsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) long long itemType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) CLPlacemark * location; 
@property (assign,nonatomic) long long locationSearchType; 
@property (nonatomic,copy) INDateComponentsRange * dateTime; 
@property (assign,nonatomic) long long dateSearchType; 
@property (assign,nonatomic) unsigned long long temporalEventTriggerTypes; 
@property (assign,nonatomic) long long taskPriority; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
@property (nonatomic,copy) NSString * notebookItemIdentifier; 
@required
-(NSString *)content;
-(void)setContent:(id)arg1;
-(id)init;
-(INDateComponentsRange *)dateTime;
-(INSpeakableString *)groupName;
-(long long)status;
-(void)setItemType:(long long)arg1;
-(CLPlacemark *)location;
-(long long)itemType;
-(void)setDateTime:(id)arg1;
-(void)setLocation:(id)arg1;
-(long long)locationSearchType;
-(void)setLocationSearchType:(long long)arg1;
-(void)setDateSearchType:(long long)arg1;
-(long long)taskPriority;
-(long long)dateSearchType;
-(unsigned long long)temporalEventTriggerTypes;
-(void)setTemporalEventTriggerTypes:(unsigned long long)arg1;
-(void)setTaskPriority:(long long)arg1;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setStatus:(long long)arg1;
-(void)setGroupName:(id)arg1;
-(INSpeakableString *)title;

@end

