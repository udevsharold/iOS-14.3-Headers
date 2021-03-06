/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@protocol OS_dispatch_queue;
@class NSObject, CNContactRelationsDescriptionLabels, NSString;

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription> {

	NSObject*<OS_dispatch_queue> _generationQueue;
	CNContactRelationsDescriptionLabels* _cachedLabels;
	Class _provider;

}

@property (readonly) NSObject*<OS_dispatch_queue> generationQueue;                            //@synthesize generationQueue=_generationQueue - In the implementation block
@property (nonatomic,retain) CNContactRelationsDescriptionLabels * cachedLabels;              //@synthesize cachedLabels=_cachedLabels - In the implementation block
@property (nonatomic,readonly) Class provider;                                                //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isNonnull;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(id)managedLabels;
-(/*^block*/id)fromPlistTransform;
-(Class)labeledValueClass;
-(/*^block*/id)plistTransform;
-(CNContactRelationsDescriptionLabels *)cachedLabels;
-(id)initWithLocalizationProvider:(Class)arg1 ;
-(NSObject*<OS_dispatch_queue>)generationQueue;
-(id)_builtInStandardLabels;
-(id)_builtInExtendedLabels;
-(id)labelsForPreferredLanguages:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void)_addLocalizedLabels:(id)arg1 fromLanguagePlist:(id)arg2 languageIdentifier:(id)arg3 toDictionary:(id)arg4 conflictInfo:(id)arg5 ;
-(void)setCachedLabels:(CNContactRelationsDescriptionLabels *)arg1 ;
-(id)cachedLabelsForPreferredLanguages:(id)arg1 ;
-(id)standardLabelsWithOptions:(unsigned long long)arg1 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(Class)provider;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)localizedStringForLabel:(id)arg1 ;
-(id)standardLabels;
@end

