/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString;

@interface FPLocalizableStringLookup : NSObject {

	NSBundle* _bundle;
	id _cfBundle;
	NSString* _tableName;

}

@property (nonatomic,retain) NSBundle * bundle;               //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) id cfBundle;                     //@synthesize cfBundle=_cfBundle - In the implementation block
@property (nonatomic,copy) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)setBundle:(NSBundle *)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)tableName;
-(id)cfBundle;
-(void)setTableName:(NSString *)arg1 ;
-(void)setCfBundle:(id)arg1 ;
@end
