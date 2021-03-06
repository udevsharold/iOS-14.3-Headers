/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFPropertyListObject;
@class NSString, NSNumber, NSArray;

@interface WFContentPropertyBuilder : NSObject {

	BOOL _irrational;
	id<WFPropertyListObject> _userInfo;
	NSString* _keyPath;
	/*^block*/id _block;
	/*^block*/id _setterBlock;
	NSString* _name;
	Class _propertyClass;
	NSNumber* _multipleValues;
	NSNumber* _filterable;
	NSNumber* _sortable;
	NSNumber* _gettable;
	NSNumber* _settable;
	NSNumber* _appendable;
	NSNumber* _removable;
	NSNumber* _primary;
	NSArray* _allowedOperators;
	NSArray* _possibleValues;
	/*^block*/id _possibleValuesGetter;
	NSNumber* _caseInsensitive;
	NSString* _negativeName;
	NSString* _singularItemName;
	NSNumber* _tense;
	NSNumber* _timeUnits;
	NSNumber* _comparableUnits;
	NSString* _measurementUnitType;
	NSString* _displayName;
	NSNumber* _canLowercaseName;

}

@property (nonatomic,copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id setterBlock;                                     //@synthesize setterBlock=_setterBlock - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) Class propertyClass;                              //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,copy) NSNumber * multipleValues;                          //@synthesize multipleValues=_multipleValues - In the implementation block
@property (nonatomic,copy) NSNumber * filterable;                              //@synthesize filterable=_filterable - In the implementation block
@property (nonatomic,copy) NSNumber * sortable;                                //@synthesize sortable=_sortable - In the implementation block
@property (nonatomic,copy) NSNumber * gettable;                                //@synthesize gettable=_gettable - In the implementation block
@property (nonatomic,copy) NSNumber * settable;                                //@synthesize settable=_settable - In the implementation block
@property (nonatomic,copy) NSNumber * appendable;                              //@synthesize appendable=_appendable - In the implementation block
@property (nonatomic,copy) NSNumber * removable;                               //@synthesize removable=_removable - In the implementation block
@property (nonatomic,copy) NSNumber * primary;                                 //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy) NSArray * allowedOperators;                         //@synthesize allowedOperators=_allowedOperators - In the implementation block
@property (nonatomic,copy) id<WFPropertyListObject> userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * possibleValues;                           //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) id possibleValuesGetter;                            //@synthesize possibleValuesGetter=_possibleValuesGetter - In the implementation block
@property (nonatomic,copy) NSNumber * caseInsensitive;                         //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy) NSString * negativeName;                            //@synthesize negativeName=_negativeName - In the implementation block
@property (nonatomic,copy) NSString * singularItemName;                        //@synthesize singularItemName=_singularItemName - In the implementation block
@property (assign,getter=isIrrational,nonatomic) BOOL irrational;              //@synthesize irrational=_irrational - In the implementation block
@property (nonatomic,copy) NSNumber * tense;                                   //@synthesize tense=_tense - In the implementation block
@property (nonatomic,copy) NSNumber * timeUnits;                               //@synthesize timeUnits=_timeUnits - In the implementation block
@property (nonatomic,copy) NSNumber * comparableUnits;                         //@synthesize comparableUnits=_comparableUnits - In the implementation block
@property (nonatomic,copy) NSString * measurementUnitType;                     //@synthesize measurementUnitType=_measurementUnitType - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSNumber * canLowercaseName;                        //@synthesize canLowercaseName=_canLowercaseName - In the implementation block
+(id)keyPath:(id)arg1 name:(id)arg2 class:(Class)arg3 ;
+(id)block:(/*^block*/id)arg1 name:(id)arg2 class:(Class)arg3 ;
+(id)keyPath:(id)arg1 setterBlock:(/*^block*/id)arg2 name:(id)arg3 class:(Class)arg4 ;
+(id)block:(/*^block*/id)arg1 setterBlock:(/*^block*/id)arg2 name:(id)arg3 class:(Class)arg4 ;
-(NSNumber *)tense;
-(void)setUserInfo:(id<WFPropertyListObject>)arg1 ;
-(NSString *)keyPath;
-(void)setName:(NSString *)arg1 ;
-(id)build;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setTense:(NSNumber *)arg1 ;
-(NSNumber *)primary;
-(NSNumber *)caseInsensitive;
-(id<WFPropertyListObject>)userInfo;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)tense:(unsigned long long)arg1 ;
-(id)block;
-(NSNumber *)removable;
-(void)setRemovable:(NSNumber *)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(NSString *)name;
-(Class)propertyClass;
-(id)displayName:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSArray *)possibleValues;
-(NSString *)displayName;
-(void)setPropertyClass:(Class)arg1 ;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(id)negativeName:(id)arg1 ;
-(id)multipleValues:(BOOL)arg1 ;
-(NSString *)negativeName;
-(NSString *)measurementUnitType;
-(NSNumber *)multipleValues;
-(NSNumber *)timeUnits;
-(NSString *)singularItemName;
-(NSNumber *)canLowercaseName;
-(NSArray *)allowedOperators;
-(NSNumber *)comparableUnits;
-(BOOL)isIrrational;
-(id)timeUnits:(unsigned long long)arg1 ;
-(id)userInfo:(id)arg1 ;
-(id)filterable:(BOOL)arg1 ;
-(id)measurementUnitType:(id)arg1 ;
-(id)setterBlock;
-(id)possibleValuesGetter;
-(void)setPossibleValuesGetter:(id)arg1 ;
-(id)sortable:(BOOL)arg1 ;
-(id)gettable:(BOOL)arg1 ;
-(id)setterBlock:(/*^block*/id)arg1 ;
-(id)appendable:(BOOL)arg1 ;
-(id)removable:(BOOL)arg1 ;
-(id)primary:(BOOL)arg1 ;
-(id)allowedOperators:(id)arg1 ;
-(id)possibleValues:(id)arg1 ;
-(id)possibleValuesGetter:(/*^block*/id)arg1 ;
-(id)caseInsensitive:(BOOL)arg1 ;
-(id)singularItemName:(id)arg1 ;
-(id)irrational:(BOOL)arg1 ;
-(id)comparableUnits:(unsigned long long)arg1 ;
-(id)canLowercaseName:(BOOL)arg1 ;
-(void)setSetterBlock:(id)arg1 ;
-(void)setMultipleValues:(NSNumber *)arg1 ;
-(NSNumber *)filterable;
-(void)setFilterable:(NSNumber *)arg1 ;
-(NSNumber *)sortable;
-(void)setSortable:(NSNumber *)arg1 ;
-(NSNumber *)gettable;
-(void)setGettable:(NSNumber *)arg1 ;
-(NSNumber *)settable;
-(void)setSettable:(NSNumber *)arg1 ;
-(NSNumber *)appendable;
-(void)setAppendable:(NSNumber *)arg1 ;
-(void)setAllowedOperators:(NSArray *)arg1 ;
-(void)setCaseInsensitive:(NSNumber *)arg1 ;
-(void)setNegativeName:(NSString *)arg1 ;
-(void)setSingularItemName:(NSString *)arg1 ;
-(void)setIrrational:(BOOL)arg1 ;
-(void)setTimeUnits:(NSNumber *)arg1 ;
-(void)setComparableUnits:(NSNumber *)arg1 ;
-(void)setMeasurementUnitType:(NSString *)arg1 ;
-(void)setCanLowercaseName:(NSNumber *)arg1 ;
@end

