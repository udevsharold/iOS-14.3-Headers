/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAddViews, NSString, SAUIImageResource, NSDictionary, NSURL, NSArray;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAddViews * alternativePunchOut; 
@property (assign,nonatomic) BOOL appAvailableInStorefront; 
@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,retain) SAUIImageResource * appIcon; 
@property (nonatomic,copy) NSDictionary * appIconMap; 
@property (assign,nonatomic) BOOL appInstalled; 
@property (nonatomic,copy) NSURL * appStoreUri; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSArray * launchOptions; 
@property (assign,nonatomic) BOOL launchOverSiri; 
@property (nonatomic,copy) NSString * predefinedButtonType; 
@property (nonatomic,copy) NSString * providerId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * themeIcons; 
+(id)appPunchOut;
+(id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIImageResource *)appIcon;
-(NSArray *)launchOptions;
-(void)setLaunchOptions:(NSArray *)arg1 ;
-(NSString *)subtitle;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setProviderId:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(id)encodedClassName;
-(NSString *)providerId;
-(void)setAppIcon:(SAUIImageResource *)arg1 ;
-(NSString *)bundleId;
-(BOOL)requiresResponse;
-(SAUIAddViews *)alternativePunchOut;
-(void)setAlternativePunchOut:(SAUIAddViews *)arg1 ;
-(BOOL)appAvailableInStorefront;
-(void)setAppAvailableInStorefront:(BOOL)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(NSDictionary *)appIconMap;
-(void)setAppIconMap:(NSDictionary *)arg1 ;
-(BOOL)appInstalled;
-(void)setAppInstalled:(BOOL)arg1 ;
-(NSURL *)appStoreUri;
-(void)setAppStoreUri:(NSURL *)arg1 ;
-(BOOL)launchOverSiri;
-(void)setLaunchOverSiri:(BOOL)arg1 ;
-(NSString *)predefinedButtonType;
-(void)setPredefinedButtonType:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
-(NSArray *)themeIcons;
-(void)setThemeIcons:(NSArray *)arg1 ;
@end

