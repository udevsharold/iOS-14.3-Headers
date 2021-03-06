/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher, NSRecursiveLock, NSDate, ALSCGreenClient;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;
	NSRecursiveLock* _databaseAccessRecursiveLock;
	BOOL _greenKey1ValueCache;
	BOOL _greenKey2ValueCache;
	BOOL _greenKey3ValueCache;
	NSDate* _greenKeyValueCacheExpirationDate;
	ALSCGreenClient* _greenClient;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)sharedManager;
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
-(id)defaultCitiesShownInWorldClock;
-(id)init;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(void)dealloc;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 ;
-(void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
-(id)allCities;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)citiesWithTimeZone:(id)arg1 ;
-(CPSearchMatcher *)citySearchMatcher;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2 ;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)allLocales;
@end

