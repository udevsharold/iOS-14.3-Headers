/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	unsigned long long _desiredFieldOptions;

}

@property (assign,nonatomic) unsigned long long desiredFieldOptions;              //@synthesize desiredFieldOptions=_desiredFieldOptions - In the implementation block
+(id)defaultCachePolicy;
-(id)recordType;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3 ;
-(unsigned long long)lowThresholdDataSizeLimit;
-(int)pbRecordType;
-(id)recordIDPrefixes;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)alwaysLocalizedKeys;
-(id)experimentalizableKeys;
-(id)saveTagRecords:(id)arg1 ;
-(id)nonLocalizableKeys;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)localizableKeys;
-(id)storeFilename;
-(id)localizableLanguageSpecificKeys;
-(unsigned long long)storeVersion;
-(void)setDesiredFieldOptions:(unsigned long long)arg1 ;
-(unsigned long long)desiredFieldOptions;
@end

