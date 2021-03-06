/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLThemePackage : NLShopPackage {
	BOOL _isDefaultTheme; 
	BOOL _doNotShowDownloadSuccessAlert; 
	BOOL _nowUpdating; 
	unsigned _usingState; 
	unsigned _actionState; 
	LineShopProductValidationScheme* _validationScheme; 
	LineFileDownload* _download; 
	long long _latestVersion; 
}
@property (assign,nonatomic) unsigned usingState; 				//@synthesize usingState=_usingState - In the implementation block
@property (assign,nonatomic) unsigned actionState; 				//@synthesize actionState=_actionState - In the implementation block
@property (assign,nonatomic) BOOL isDefaultTheme; 				//@synthesize isDefaultTheme=_isDefaultTheme - In the implementation block
@property (nonatomic,copy) BOOL isCurrentUsingTheme; 
@property (assign,nonatomic) long long latestVersion; 				//@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,copy) NSURL* iconURL; 
@property (nonatomic,copy) NSURL* icon2xURL; 
@property (nonatomic,copy) NSURL* themeZipURL; 
@property (nonatomic,copy) NSURL* localDirURL; 
@property (nonatomic,copy) NSURL* themeJsonFileURL; 
@property (nonatomic,retain) LineShopProductValidationScheme* validationScheme; 				//@synthesize validationScheme=_validationScheme - In the implementation block
@property (assign,nonatomic) BOOL doNotShowDownloadSuccessAlert; 				//@synthesize doNotShowDownloadSuccessAlert=_doNotShowDownloadSuccessAlert - In the implementation block
@property (assign,nonatomic) BOOL nowUpdating; 				//@synthesize nowUpdating=_nowUpdating - In the implementation block
@property (nonatomic,copy) NSString* productURIPath; 
@property (nonatomic,retain) LineFileDownload* download; 				//@synthesize download=_download - In the implementation block
+(id)shopID;
+(id)generateProductURIPathWithProductID:(id)arg1 version:(long long)arg2;
+(id)shopHostURL;
-(void)setDoNotShowDownloadSuccessAlert:(BOOL)arg1;
-(id)downloadWithAlertType:(unsigned)arg1;
-(BOOL)isUsingTheme;
-(BOOL)deletePackage;
-(void)setLatestVersion:(long long)arg1;
-(void)setDownload:(id)arg1;
-(id)initWithProductID:(id)arg1;
-(void)setValidationScheme:(id)arg1;
-(id)themeManifest;
-(id)initWithProductName:(id)arg1 productID:(id)arg2 productVerion:(long long)arg3;
-(void)setIsDefaultTheme:(BOOL)arg1;
-(void)setActionState:(unsigned)arg1;
-(void)setUsingState:(unsigned)arg1;
-(void)checkActionStatus;
-(void)updateRevisionFromManifest;
-(void)setNowUpdating:(BOOL)arg1;
-(BOOL)isDownloaded;
-(BOOL)isDownloading;
-(void)cancelDownload;
-(id)description;
-(void).cxx_destruct;
@end