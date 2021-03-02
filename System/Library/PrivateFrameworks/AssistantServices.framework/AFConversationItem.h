/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFConversationStorable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {

	AFMutableConversationItem* _delegateItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 transient:(BOOL)arg9 supplemental:(BOOL)arg10 immersiveExperience:(BOOL)arg11 associatedDataStore:(id)arg12 ;
-(BOOL)isTransient;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVirgin;
-(id)revisionIdentifier;
-(id)identifier;
-(id)initWithDelegateItem:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(id)aceCommandIdentifier;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(id)associatedDataStore;
-(id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 transient:(BOOL)arg7 supplemental:(BOOL)arg8 immersiveExperience:(BOOL)arg9 associatedDataStore:(id)arg10 ;
-(id)dialogPhase;
-(id)aceObject;
-(long long)presentationState;
@end
