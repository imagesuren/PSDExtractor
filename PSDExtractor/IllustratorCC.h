/*
 * IllustratorCC.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class IllustratorCCApplication, IllustratorCCDocument, IllustratorCCArtwork, IllustratorCCArtboard, IllustratorCCBrush, IllustratorCCDocumentPreset, IllustratorCCGradient, IllustratorCCGradientStop, IllustratorCCGradientStopInfo, IllustratorCCGraphicStyle, IllustratorCCIllustratorPreferences, IllustratorCCLayer, IllustratorCCPageItem, IllustratorCCCompoundPathItem, IllustratorCCGraphItem, IllustratorCCGroupItem, IllustratorCCLegacyTextItem, IllustratorCCMeshItem, IllustratorCCNonNativeItem, IllustratorCCPathItem, IllustratorCCPathPoint, IllustratorCCPathPointInfo, IllustratorCCPlacedItem, IllustratorCCPluginItem, IllustratorCCRasterEffectOptions, IllustratorCCRasterItem, IllustratorCCRasterizeOptions, IllustratorCCSymbol, IllustratorCCSymbolItem, IllustratorCCTabStopInfo, IllustratorCCTag, IllustratorCCFont, IllustratorCCTextFrame, IllustratorCCView, IllustratorCCColorInfo, IllustratorCCCMYKColorInfo, IllustratorCCGradientColorInfo, IllustratorCCGrayColorInfo, IllustratorCCLabColorInfo, IllustratorCCNoColorInfo, IllustratorCCPattern, IllustratorCCPatternColorInfo, IllustratorCCRGBColorInfo, IllustratorCCSpot, IllustratorCCSpotColorInfo, IllustratorCCSwatch, IllustratorCCSwatchgroup, IllustratorCCCharacter, IllustratorCCCharacterStyle, IllustratorCCInsertionPoint, IllustratorCCLine, IllustratorCCParagraph, IllustratorCCParagraphStyle, IllustratorCCStory, IllustratorCCText, IllustratorCCTextPath, IllustratorCCWord, IllustratorCCMatrix, IllustratorCCEllipse, IllustratorCCRectangle, IllustratorCCRoundedRectangle, IllustratorCCPolygon, IllustratorCCStar, IllustratorCCAutoCADOptions, IllustratorCCOpenOptions, IllustratorCCPDFOptions, IllustratorCCPhotoshopOptions, IllustratorCCEPSSaveOptions, IllustratorCCFXGSaveOptions, IllustratorCCIllustratorSaveOptions, IllustratorCCPDFSaveOptions, IllustratorCCAutoCADExportOptions, IllustratorCCFlashExportOptions, IllustratorCCGIFExportOptions, IllustratorCCImageCaptureOptions, IllustratorCCJPEGExportOptions, IllustratorCCPhotoshopExportOptions, IllustratorCCPNG24ExportOptions, IllustratorCCPNG8ExportOptions, IllustratorCCSVGExportOptions, IllustratorCCTIFFExportOptions, IllustratorCCDataset, IllustratorCCVariable, IllustratorCCColorManagementOptions, IllustratorCCColorSeparationOptions, IllustratorCCCoordinateOptions, IllustratorCCFlatteningOptions, IllustratorCCFontOptions, IllustratorCCInk, IllustratorCCInkProperties, IllustratorCCJobOptions, IllustratorCCPageMarksOptions, IllustratorCCPaper, IllustratorCCPaperOptions, IllustratorCCPaperProperties, IllustratorCCPostscriptOptions, IllustratorCCPPDFile, IllustratorCCPPDProperties, IllustratorCCPrintOptions, IllustratorCCPrinter, IllustratorCCPrinterProperties, IllustratorCCScreenProperties, IllustratorCCScreenSpotFunction, IllustratorCCSeparationScreen, IllustratorCCTracingobject, IllustratorCCTracingoptions, IllustratorCCObsolete_properties;

enum IllustratorCCESCM {
	IllustratorCCESCMDesktop = 'e002',
	IllustratorCCESCMFullScreen = 'e003',
	IllustratorCCESCMMultiwindow = 'e001'
};
typedef enum IllustratorCCESCM IllustratorCCESCM;

enum IllustratorCCECCS {
	IllustratorCCECCSCMYK = 'eCyM',
	IllustratorCCECCSRGB = 'eRbM'
};
typedef enum IllustratorCCECCS IllustratorCCECCS;

enum IllustratorCCEDPT {
	IllustratorCCEDPTBasicCMYKDocument = 'pCPR',
	IllustratorCCEDPTBasicRGBDocument = 'pRPR',
	IllustratorCCEDPTMobileDocumentPreset = 'pMPR',
	IllustratorCCEDPTPrintDocumentPreset = 'pPPR',
	IllustratorCCEDPTVideoDocumentPreset = 'pVPR',
	IllustratorCCEDPTWebDocumentPreset = 'pWPR'
};
typedef enum IllustratorCCEDPT IllustratorCCEDPT;

enum IllustratorCCEDCR {
	IllustratorCCEDCRHighResolution = 'pHRR',
	IllustratorCCEDCRMediumResolution = 'pMRR',
	IllustratorCCEDCRScreenResolution = 'pSRR'
};
typedef enum IllustratorCCEDCR IllustratorCCEDCR;

enum IllustratorCCEDGR {
	IllustratorCCEDGRBlueTransparencyGrids = 'pTGB',
	IllustratorCCEDGRDarkColorTransparencyGrids = 'pTGD',
	IllustratorCCEDGRGreenTransparencyGrids = 'pTGG',
	IllustratorCCEDGRHideTransparencyGrids = 'pTGN',
	IllustratorCCEDGRLightColorTransparencyGrids = 'pTGL',
	IllustratorCCEDGRMediumColorTransparencyGrids = 'pTGM',
	IllustratorCCEDGROrangeTransparencyGrids = 'pTGO',
	IllustratorCCEDGRPurpleTransparencyGrids = 'pTGP',
	IllustratorCCEDGRRedColorTransparencyGrids = 'pTGR'
};
typedef enum IllustratorCCEDGR IllustratorCCEDGR;

enum IllustratorCCEDPM {
	IllustratorCCEDPMDefaultPreview = 'pDPM',
	IllustratorCCEDPMOverprintPreview = 'pOPP',
	IllustratorCCEDPMPixelPreview = 'pPPM'
};
typedef enum IllustratorCCEDPM IllustratorCCEDPM;

enum IllustratorCCEDAL {
	IllustratorCCEDALColumn = 'pCol',
	IllustratorCCEDALGridByColumn = 'pGrC',
	IllustratorCCEDALGridByRow = 'pGrR',
	IllustratorCCEDALRlGridByCol = 'pRGC',
	IllustratorCCEDALRlGridByRow = 'pRGR',
	IllustratorCCEDALRlRow = 'pRRw',
	IllustratorCCEDALRow = 'pRow'
};
typedef enum IllustratorCCEDAL IllustratorCCEDAL;

enum IllustratorCCECLS {
	IllustratorCCECLSCMYK = 'eCyM',
	IllustratorCCECLSDeviceN = 'e0DN',
	IllustratorCCECLSGray = 'e0GM',
	IllustratorCCECLSIndexed = 'e0ID',
	IllustratorCCECLSLAB = 'e0Lb',
	IllustratorCCECLSRGB = 'eRbM',
	IllustratorCCECLSSeparation = 'e0SP'
};
typedef enum IllustratorCCECLS IllustratorCCECLS;

enum IllustratorCCESTc {
	IllustratorCCESTcButted = 'e020',
	IllustratorCCESTcProjecting = 'e022',
	IllustratorCCESTcRounded = 'e021'
};
typedef enum IllustratorCCESTc IllustratorCCESTc;

enum IllustratorCCESTj {
	IllustratorCCESTjBeveled = 'e031',
	IllustratorCCESTjMitered = 'e030',
	IllustratorCCESTjRounded = 'e021'
};
typedef enum IllustratorCCESTj IllustratorCCESTj;

enum IllustratorCCESGs {
	IllustratorCCESGsAnchorSelected = 'e050',
	IllustratorCCESGsLeftRightSelected = 'e053',
	IllustratorCCESGsLeftSelected = 'e051',
	IllustratorCCESGsNone = 'ge01',
	IllustratorCCESGsRightSelected = 'e052'
};
typedef enum IllustratorCCESGs IllustratorCCESGs;

enum IllustratorCCEPTy {
	IllustratorCCEPTyCorner = 'e057',
	IllustratorCCEPTySmooth = 'e056'
};
typedef enum IllustratorCCEPTy IllustratorCCEPTy;

enum IllustratorCCETXt {
	IllustratorCCETXtAreaText = 'e062',
	IllustratorCCETXtPathText = 'e061',
	IllustratorCCETXtPointText = 'e060'
};
typedef enum IllustratorCCETXt IllustratorCCETXt;

enum IllustratorCCETAa {
	IllustratorCCETAaCrisp = 'e064',
	IllustratorCCETAaNone = 'ge01',
	IllustratorCCETAaSharp = 'e063',
	IllustratorCCETAaStrong = 'e065'
};
typedef enum IllustratorCCETAa IllustratorCCETAa;

enum IllustratorCCEGDt {
	IllustratorCCEGDtLinear = 'e040',
	IllustratorCCEGDtRadial = 'e041'
};
typedef enum IllustratorCCEGDt IllustratorCCEGDt;

enum IllustratorCCETXo {
	IllustratorCCETXoHorizontal = 'e070',
	IllustratorCCETXoVertical = 'e071'
};
typedef enum IllustratorCCETXo IllustratorCCETXo;

enum IllustratorCCECRs {
	IllustratorCCECRsJapaneseStyle = 'e081',
	IllustratorCCECRsStandard = 'e080'
};
typedef enum IllustratorCCECRs IllustratorCCECRs;

enum IllustratorCCERLt {
	IllustratorCCERLtDataFromFile = 'e091',
	IllustratorCCERLtModifiedData = 'e092',
	IllustratorCCERLtNoData = 'e090'
};
typedef enum IllustratorCCERLt IllustratorCCERLt;

enum IllustratorCCETBa {
	IllustratorCCETBaCenter = 'e122',
	IllustratorCCETBaDecimal = 'e124',
	IllustratorCCETBaLeft = 'e121',
	IllustratorCCETBaRight = 'e123'
};
typedef enum IllustratorCCETBa IllustratorCCETBa;

enum IllustratorCCEPRa {
	IllustratorCCEPRaCenter = 'e122',
	IllustratorCCEPRaFullJustify = 'e128',
	IllustratorCCEPRaFullJustifyLastLineCenter = 'e127',
	IllustratorCCEPRaFullJustifyLastLineLeft = 'e125',
	IllustratorCCEPRaFullJustifyLastLineRight = 'e126',
	IllustratorCCEPRaLeft = 'e121',
	IllustratorCCEPRaRight = 'e123'
};
typedef enum IllustratorCCEPRa IllustratorCCEPRa;

enum IllustratorCCETRt {
	IllustratorCCETRtBottom = 'e177',
	IllustratorCCETRtBottomLeft = 'e174',
	IllustratorCCETRtBottomRight = 'e17A',
	IllustratorCCETRtCenter = 'e122',
	IllustratorCCETRtDocumentOrigin = 'e171',
	IllustratorCCETRtLeft = 'e121',
	IllustratorCCETRtRight = 'e123',
	IllustratorCCETRtTop = 'e175',
	IllustratorCCETRtTopLeft = 'e172',
	IllustratorCCETRtTopRight = 'e178'
};
typedef enum IllustratorCCETRt IllustratorCCETRt;

enum IllustratorCCEDCc {
	IllustratorCCEDCcIllustrator10 = 'e209',
	IllustratorCCEDCcIllustrator11 = 'e20a',
	IllustratorCCEDCcIllustrator12 = 'e20b',
	IllustratorCCEDCcIllustrator13 = 'e20c',
	IllustratorCCEDCcIllustrator14 = 'e20d',
	IllustratorCCEDCcIllustrator15 = 'e20e',
	IllustratorCCEDCcIllustrator16 = 'e20f',
	IllustratorCCEDCcIllustrator17 = 'e20g',
	IllustratorCCEDCcIllustrator3 = 'e2x2',
	IllustratorCCEDCcIllustrator8 = 'e207',
	IllustratorCCEDCcIllustrator9 = 'e208',
	IllustratorCCEDCcJapanese3 = 'e202'
};
typedef enum IllustratorCCEDCc IllustratorCCEDCc;

enum IllustratorCCEPdX {
	IllustratorCCEPdXPDFX1a2001 = 'ePd1',
	IllustratorCCEPdXPDFX1a2003 = 'ePd2',
	IllustratorCCEPdXPDFX32001 = 'ePd3',
	IllustratorCCEPdXPDFX32002 = 'ePdE',
	IllustratorCCEPdXPDFX32003 = 'ePd4',
	IllustratorCCEPdXPDFX42007 = 'ePd5',
	IllustratorCCEPdXPDFXNone = 'ePd0'
};
typedef enum IllustratorCCEPdX IllustratorCCEPdX;

enum IllustratorCCEPDc {
	IllustratorCCEPDcAcrobat4 = 'e231',
	IllustratorCCEPDcAcrobat5 = 'e232',
	IllustratorCCEPDcAcrobat6 = 'e233',
	IllustratorCCEPDcAcrobat7 = 'e234',
	IllustratorCCEPDcAcrobat8 = 'e235'
};
typedef enum IllustratorCCEPDc IllustratorCCEPDc;

enum IllustratorCCEPSc {
	IllustratorCCEPScPhotoshop6 = 'e241',
	IllustratorCCEPScPhotoshop8 = 'e242'
};
typedef enum IllustratorCCEPSc IllustratorCCEPSc;

enum IllustratorCCCCcT {
	IllustratorCCCCcTAutomaticJPEGHigh = 'e504',
	IllustratorCCCCcTAutomaticJPEGLow = 'e502',
	IllustratorCCCCcTAutomaticJPEGMaximum = 'e505',
	IllustratorCCCCcTAutomaticJPEGMedium = 'e503',
	IllustratorCCCCcTAutomaticJPEGMinimum = 'e501',
	IllustratorCCCCcTAutomaticJPEG2000High = 'e50e',
	IllustratorCCCCcTAutomaticJPEG2000Lossless = 'e511',
	IllustratorCCCCcTAutomaticJPEG2000Low = 'e50c',
	IllustratorCCCCcTAutomaticJPEG2000Maximum = 'e510',
	IllustratorCCCCcTAutomaticJPEG2000Medium = 'e50d',
	IllustratorCCCCcTAutomaticJPEG2000Minimum = 'e50b',
	IllustratorCCCCcTJPEGHigh = 'e258',
	IllustratorCCCCcTJPEGLow = 'e256',
	IllustratorCCCCcTJPEGMaximum = 'e259',
	IllustratorCCCCcTJPEGMedium = 'e257',
	IllustratorCCCCcTJPEGMinimum = 'e255',
	IllustratorCCCCcTJPEG2000High = 'e515',
	IllustratorCCCCcTJPEG2000Lossless = 'e517',
	IllustratorCCCCcTJPEG2000Low = 'e513',
	IllustratorCCCCcTJPEG2000Maximum = 'e516',
	IllustratorCCCCcTJPEG2000Medium = 'e514',
	IllustratorCCCCcTJPEG2000Minimum = 'e512',
	IllustratorCCCCcTNone = 'ge01',
	IllustratorCCCCcTZIP4bit = 'e25a',
	IllustratorCCCCcTZIP8bit = 'e25b'
};
typedef enum IllustratorCCCCcT IllustratorCCCCcT;

enum IllustratorCCEPcC {
	IllustratorCCEPcCColorConversionRepurpose = 'ePc3',
	IllustratorCCEPcCColorConversionToDest = 'ePc2',
	IllustratorCCEPcCNone = 'ge01'
};
typedef enum IllustratorCCEPcC IllustratorCCEPcC;

enum IllustratorCCEDcD {
	IllustratorCCEDcDColorDestDocCmyk = 'eDc2',
	IllustratorCCEDcDColorDestDocRgb = 'eDc4',
	IllustratorCCEDcDColorDestProfile = 'eDc6',
	IllustratorCCEDcDColorDestWorkingCmyk = 'eDc3',
	IllustratorCCEDcDColorDestWorkingRgb = 'eDc5',
	IllustratorCCEDcDNone = 'ge01'
};
typedef enum IllustratorCCEDcD IllustratorCCEDcD;

enum IllustratorCCEDpC {
	IllustratorCCEDpCIncludeAllProfiles = 'eDp2',
	IllustratorCCEDpCIncludeAllRgb = 'eDp4',
	IllustratorCCEDpCIncludeDestProfile = 'eDp5',
	IllustratorCCEDpCLeaveProfileUnchanged = 'eDp3',
	IllustratorCCEDpCNone = 'ge01'
};
typedef enum IllustratorCCEDpC IllustratorCCEDpC;

enum IllustratorCCCMcQ {
	IllustratorCCCMcQCCIT3 = 'e272',
	IllustratorCCCMcQCCIT4 = 'e271',
	IllustratorCCCMcQNone = 'ge01',
	IllustratorCCCMcQRunLength = 'e274',
	IllustratorCCCMcQZIP = 'e273'
};
typedef enum IllustratorCCCMcQ IllustratorCCCMcQ;

enum IllustratorCCCPtW {
	IllustratorCCCPtWTrimmarkweight0125 = 'e570',
	IllustratorCCCPtWTrimmarkweight025 = 'e571',
	IllustratorCCCPtWTrimmarkweight05 = 'e572'
};
typedef enum IllustratorCCCPtW IllustratorCCCPtW;

enum IllustratorCCCPoP {
	IllustratorCCCPoPDiscard = 'e541',
	IllustratorCCCPoPPreserve = 'e540'
};
typedef enum IllustratorCCCPoP IllustratorCCCPoP;

enum IllustratorCCCPpA {
	IllustratorCCCPpAPdf128PrintHighRes = 'e552',
	IllustratorCCCPpAPdf128PrintLowRes = 'e551',
	IllustratorCCCPpAPdf128PrintNone = 'e550',
	IllustratorCCCPpAPdf40PrintHighRes = 'e554',
	IllustratorCCCPpAPdf40PrintNone = 'e553'
};
typedef enum IllustratorCCCPpA IllustratorCCCPpA;

enum IllustratorCCCPcA {
	IllustratorCCCPcAPdf128AnyChanges = 'e564',
	IllustratorCCCPcAPdf128CommentingAllowed = 'e563',
	IllustratorCCCPcAPdf128EditPageAllowed = 'e561',
	IllustratorCCCPcAPdf128FillFormAllowed = 'e562',
	IllustratorCCCPcAPdf128NoChanges = 'e560',
	IllustratorCCCPcAPdf40AnyChanges = 'e568',
	IllustratorCCCPcAPdf40CommentingAllowed = 'e566',
	IllustratorCCCPcAPdf40NoChanges = 'e565',
	IllustratorCCCPcAPdf40PageLayoutAllowed = 'e567'
};
typedef enum IllustratorCCCPcA IllustratorCCCPcA;

enum IllustratorCCCRsT {
	IllustratorCCCRsTAverageDownsampling = 'e291',
	IllustratorCCCRsTBicubicDownsample = 'e293',
	IllustratorCCCRsTNodownsample = 'e290',
	IllustratorCCCRsTSubsampling = 'e292'
};
typedef enum IllustratorCCCRsT IllustratorCCCRsT;

enum IllustratorCCEEPV {
	IllustratorCCEEPVBWMacintosh = 'e211',
	IllustratorCCEEPVBWTIFF = 'e213',
	IllustratorCCEEPVColorMacintosh = 'e212',
	IllustratorCCEEPVColorTIFF = 'e214',
	IllustratorCCEEPVNone = 'ge01',
	IllustratorCCEEPVTransparentColorTIFF = 'e215'
};
typedef enum IllustratorCCEEPV IllustratorCCEEPV;

enum IllustratorCCEPSt {
	IllustratorCCEPStLevel2 = 'e221',
	IllustratorCCEPStLevel3 = 'e222'
};
typedef enum IllustratorCCEPSt IllustratorCCEPSt;

enum IllustratorCCEPPS {
	IllustratorCCEPPSLevel1 = 'e220',
	IllustratorCCEPPSLevel2 = 'e221',
	IllustratorCCEPPSLevel3 = 'e222'
};
typedef enum IllustratorCCEPPS IllustratorCCEPPS;

enum IllustratorCCSavo {
	IllustratorCCSavoAsk = 'ask ',
	IllustratorCCSavoNo = 'no  ',
	IllustratorCCSavoYes = 'yes '
};
typedef enum IllustratorCCSavo IllustratorCCSavo;

enum IllustratorCCERUt {
	IllustratorCCERUtCentimeters = 'e183',
	IllustratorCCERUtInches = 'e182',
	IllustratorCCERUtMillimeters = 'e186',
	IllustratorCCERUtPicas = 'e185',
	IllustratorCCERUtPixels = 'e188',
	IllustratorCCERUtPoints = 'e184',
	IllustratorCCERUtQs = 'e187',
	IllustratorCCERUtUnknown = 'e120'
};
typedef enum IllustratorCCERUt IllustratorCCERUt;

enum IllustratorCCCBlM {
	IllustratorCCCBlMColorBlend = 'e314',
	IllustratorCCCBlMColorBurn = 'e307',
	IllustratorCCCBlMColorDodge = 'e306',
	IllustratorCCCBlMDarken = 'e308',
	IllustratorCCCBlMDifference = 'e310',
	IllustratorCCCBlMExclusion = 'e311',
	IllustratorCCCBlMHardLight = 'e305',
	IllustratorCCCBlMHue = 'e312',
	IllustratorCCCBlMLighten = 'e309',
	IllustratorCCCBlMLuminosity = 'e315',
	IllustratorCCCBlMMultiply = 'e301',
	IllustratorCCCBlMNormal = 'e110',
	IllustratorCCCBlMOverlay = 'e303',
	IllustratorCCCBlMSaturationBlend = 'e313',
	IllustratorCCCBlMScreen = 'e302',
	IllustratorCCCBlMSoftLight = 'e304'
};
typedef enum IllustratorCCCBlM IllustratorCCCBlM;

enum IllustratorCCCKOS {
	IllustratorCCCKOSDisabled = 'e321',
	IllustratorCCCKOSEnabled = 'e322',
	IllustratorCCCKOSInherited = 'e323',
	IllustratorCCCKOSUnknown = 'e120'
};
typedef enum IllustratorCCCKOS IllustratorCCCKOS;

enum IllustratorCCEZOR {
	IllustratorCCEZORMoveBackward = 'e372',
	IllustratorCCEZORMoveForward = 'e371',
	IllustratorCCEZORMoveToBack = 'e373',
	IllustratorCCEZORMoveToFront = 'e370'
};
typedef enum IllustratorCCEZOR IllustratorCCEZOR;

enum IllustratorCCEDTD {
	IllustratorCCEDTDSVG10 = 'e3B0',
	IllustratorCCEDTDSVG11 = 'e3B1',
	IllustratorCCEDTDSVGBasic11 = 'e3B4',
	IllustratorCCEDTDSVGTiny11 = 'e3B2',
	IllustratorCCEDTDSVGTiny11Plus = 'e3B3',
	IllustratorCCEDTDSVGTiny12 = 'e3B5'
};
typedef enum IllustratorCCEDTD IllustratorCCEDTD;

enum IllustratorCCESFT {
	IllustratorCCESFTCEFFont = 'e3A0',
	IllustratorCCESFTOutlineFont = 'e3A2',
	IllustratorCCESFTSVGFont = 'e3A1'
};
typedef enum IllustratorCCESFT IllustratorCCESFT;

enum IllustratorCCESFS {
	IllustratorCCESFSAllGlyphs = 'e385',
	IllustratorCCESFSCommonEnglish = 'e381',
	IllustratorCCESFSCommonRoman = 'e383',
	IllustratorCCESFSGlyphsUsed = 'e380',
	IllustratorCCESFSGlyphsUsedPlusEnglish = 'e382',
	IllustratorCCESFSGlyphsUsedPlusRoman = 'e384',
	IllustratorCCESFSNone = 'ge01'
};
typedef enum IllustratorCCESFS IllustratorCCESFS;

enum IllustratorCCESDE {
	IllustratorCCESDEASCII = 'e400',
	IllustratorCCESDEUTF16 = 'e402',
	IllustratorCCESDEUTF8 = 'e401'
};
typedef enum IllustratorCCESDE IllustratorCCESDE;

enum IllustratorCCESCS {
	IllustratorCCESCSEntities = 'e410',
	IllustratorCCESCSPresentationAttributes = 'e413',
	IllustratorCCESCSStyleAttributes = 'e411',
	IllustratorCCESCSStyleElements = 'e412'
};
typedef enum IllustratorCCESCS IllustratorCCESCS;

enum IllustratorCCEOFl {
	IllustratorCCEOFlPreserveAppearance = 'e421',
	IllustratorCCEOFlPreservePaths = 'e420'
};
typedef enum IllustratorCCEOFl IllustratorCCEOFl;

enum IllustratorCCECMd {
	IllustratorCCECMdProcessColor = 'e426',
	IllustratorCCECMdRegistrationColor = 'e425',
	IllustratorCCECMdSpotColor = 'e427'
};
typedef enum IllustratorCCECMd IllustratorCCECMd;

enum IllustratorCCESCk {
	IllustratorCCESCkSpotCmykColor = 'kCMY',
	IllustratorCCESCkSpotLabColor = 'kLAB',
	IllustratorCCESCkSpotRgbColor = 'kRGB'
};
typedef enum IllustratorCCESCk IllustratorCCESCk;

enum IllustratorCCEFXS {
	IllustratorCCEFXSArtboardsToFiles = 'e434',
	IllustratorCCEFXSFlashFile = 'e430',
	IllustratorCCEFXSLayersToFiles = 'e432',
	IllustratorCCEFXSLayersToFrames = 'e431',
	IllustratorCCEFXSLayersToSymbols = 'e433'
};
typedef enum IllustratorCCEFXS IllustratorCCEFXS;

enum IllustratorCCEFOS {
	IllustratorCCEFOSOutputArtBounds = 'e435',
	IllustratorCCEFOSOutputArtboardBounds = 'e436',
	IllustratorCCEFOSOutputCroprectBounds = 'e437'
};
typedef enum IllustratorCCEFOS IllustratorCCEFOS;

enum IllustratorCCEFXV {
	IllustratorCCEFXVSWFVersion1 = 'eFV1',
	IllustratorCCEFXVSWFVersion2 = 'eFV2',
	IllustratorCCEFXVSWFVersion3 = 'eFV3',
	IllustratorCCEFXVSWFVersion4 = 'eFV4',
	IllustratorCCEFXVSWFVersion5 = 'eFV5',
	IllustratorCCEFXVSWFVersion6 = 'eFV6',
	IllustratorCCEFXVSWFVersion7 = 'eFV7',
	IllustratorCCEFXVSWFVersion8 = 'eFV8',
	IllustratorCCEFXVSWFVersion9 = 'eFV9'
};
typedef enum IllustratorCCEFXV IllustratorCCEFXV;

enum IllustratorCCEFCS {
	IllustratorCCEFCSLossless = 'e43a',
	IllustratorCCEFCSLossy = 'e43b'
};
typedef enum IllustratorCCEFCS IllustratorCCEFCS;

enum IllustratorCCEFOT {
	IllustratorCCEFOTBottomUp = 'e4A0',
	IllustratorCCEFOTTopDown = 'e4A1'
};
typedef enum IllustratorCCEFOT IllustratorCCEFOT;

enum IllustratorCCEFBA {
	IllustratorCCEFBAInBuild = 'e4B1',
	IllustratorCCEFBAInSequence = 'e4B0',
	IllustratorCCEFBANone = 'ge01'
};
typedef enum IllustratorCCEFBA IllustratorCCEFBA;

enum IllustratorCCEFJM {
	IllustratorCCEFJMOptimized = 'e43e',
	IllustratorCCEFJMStandard = 'e080'
};
typedef enum IllustratorCCEFJM IllustratorCCEFJM;

enum IllustratorCCEFPS {
	IllustratorCCEFPSFlashPlaybackLocalAccess = 'eFPL',
	IllustratorCCEFPSFlashPlaybackNetworkAccess = 'eFPN'
};
typedef enum IllustratorCCEFPS IllustratorCCEFPS;

enum IllustratorCCEVKd {
	IllustratorCCEVKdGraph = 'e444',
	IllustratorCCEVKdImage = 'e443',
	IllustratorCCEVKdTextual = 'e442',
	IllustratorCCEVKdUnknown = 'e120',
	IllustratorCCEVKdVisibility = 'e441'
};
typedef enum IllustratorCCEVKd IllustratorCCEVKd;

enum IllustratorCCEAFF {
	IllustratorCCEAFFDwg = 'eAF1',
	IllustratorCCEAFFDxf = 'eAF0'
};
typedef enum IllustratorCCEAFF IllustratorCCEAFF;

enum IllustratorCCEAVS {
	IllustratorCCEAVSAutoCADRelease13 = 'eAV0',
	IllustratorCCEAVSAutoCADRelease14 = 'eAV1',
	IllustratorCCEAVSAutoCADRelease15 = 'eAV2',
	IllustratorCCEAVSAutoCADRelease18 = 'eAV3',
	IllustratorCCEAVSAutoCADRelease21 = 'eAV4',
	IllustratorCCEAVSAutoCADRelease24 = 'eAV5'
};
typedef enum IllustratorCCEAVS IllustratorCCEAVS;

enum IllustratorCCEASU {
	IllustratorCCEASUAutocadCentimeters = 'eAU4',
	IllustratorCCEASUAutocadInches = 'eAU2',
	IllustratorCCEASUAutocadMillimeters = 'eAU3',
	IllustratorCCEASUAutocadPicas = 'eAU1',
	IllustratorCCEASUAutocadPixels = 'eAU5',
	IllustratorCCEASUAutocadPoints = 'eAU0'
};
typedef enum IllustratorCCEASU IllustratorCCEASU;

enum IllustratorCCEACL {
	IllustratorCCEACLMax16Colors = 'eAC1',
	IllustratorCCEACLMax256Colors = 'eAC2',
	IllustratorCCEACLMax8Colors = 'eAC0',
	IllustratorCCEACLTrueColors = 'eAC3'
};
typedef enum IllustratorCCEACL IllustratorCCEACL;

enum IllustratorCCEARF {
	IllustratorCCEARFJPEGRaster = 'eAR1',
	IllustratorCCEARFPNGRaster = 'eAR0'
};
typedef enum IllustratorCCEARF IllustratorCCEARF;

enum IllustratorCCEExO {
	IllustratorCCEExOMaintainAppearance = 'eEx0',
	IllustratorCCEExOMaximizeEditability = 'eEx1'
};
typedef enum IllustratorCCEExO IllustratorCCEExO;

enum IllustratorCCEGSO {
	IllustratorCCEGSOFitArtboard = 'eAS1',
	IllustratorCCEGSOOriginalSize = 'eAS0',
	IllustratorCCEGSOScaleByValue = 'eAS2'
};
typedef enum IllustratorCCEGSO IllustratorCCEGSO;

enum IllustratorCCETbo {
	IllustratorCCETboIBMPC = 'kTBP',
	IllustratorCCETboMacintosh = 'kTBM'
};
typedef enum IllustratorCCETbo IllustratorCCETbo;

enum IllustratorCCEMUI {
	IllustratorCCEMUIInteractWithAll = 'e45d',
	IllustratorCCEMUIInteractWithLocal = 'e45c',
	IllustratorCCEMUIInteractWithSelf = 'e45b',
	IllustratorCCEMUINeverInteract = 'e45a'
};
typedef enum IllustratorCCEMUI IllustratorCCEMUI;

enum IllustratorCCEPVu {
	IllustratorCCEPVuNegative = 'eao2',
	IllustratorCCEPVuPositive = 'ea01'
};
typedef enum IllustratorCCEPVu IllustratorCCEPVu;

enum IllustratorCCE940 {
	IllustratorCCE940BeforeRunning = 'a942',
	IllustratorCCE940Never = 'Nevr',
	IllustratorCCE940OnRuntimeError = 'e941'
};
typedef enum IllustratorCCE940 IllustratorCCE940;

enum IllustratorCCECHd {
	IllustratorCCECHdKumiMoji = 'e112',
	IllustratorCCECHdNormal = 'e110',
	IllustratorCCECHdRotated = 'e111'
};
typedef enum IllustratorCCECHd IllustratorCCECHd;

enum IllustratorCCEPBX {
	IllustratorCCEPBXPDFArtBox = 'ePO1',
	IllustratorCCEPBXPDFBleedBox = 'eP04',
	IllustratorCCEPBXPDFBoundingBox = 'eP06',
	IllustratorCCEPBXPDFCropBox = 'eP02',
	IllustratorCCEPBXPDFMediaBox = 'eP05',
	IllustratorCCEPBXPDFTrimBox = 'eP03'
};
typedef enum IllustratorCCEPBX IllustratorCCEPBX;

enum IllustratorCCERAS {
	IllustratorCCERASBitmapRasterization = 'kRSb',
	IllustratorCCERASDefaultRasterization = 'kRSd',
	IllustratorCCERASGrayscaleRasterization = 'kRSg'
};
typedef enum IllustratorCCERAS IllustratorCCERAS;

enum IllustratorCCEALS {
	IllustratorCCEALSArtOptimized = 'aOPT',
	IllustratorCCEALSNone = 'ge01',
	IllustratorCCEALSTypeOptimized = 'tOPT'
};
typedef enum IllustratorCCEALS IllustratorCCEALS;

enum IllustratorCCEFxV {
	IllustratorCCEFxVVersion10 = 'e581',
	IllustratorCCEFxVVersion20 = 'e582'
};
typedef enum IllustratorCCEFxV IllustratorCCEFxV;

enum IllustratorCCEFFp {
	IllustratorCCEFFpExpandFilters = 'e591',
	IllustratorCCEFFpKeepFiltersEditable = 'e593',
	IllustratorCCEFFpRasterizeFilters = 'e592'
};
typedef enum IllustratorCCEFFp IllustratorCCEFFp;

enum IllustratorCCEFTp {
	IllustratorCCEFTpAutoConvertText = 'e5a4',
	IllustratorCCEFTpKeepTextEditable = 'e5a3',
	IllustratorCCEFTpOutlineText = 'e5a1',
	IllustratorCCEFTpRasterizeText = 'e5a2'
};
typedef enum IllustratorCCEFTp IllustratorCCEFTp;

enum IllustratorCCEFGp {
	IllustratorCCEFGpAutoConvertGradients = 'e5b4',
	IllustratorCCEFGpKeepGradientsEditable = 'e5b3'
};
typedef enum IllustratorCCEFGp IllustratorCCEFGp;

enum IllustratorCCEFBp {
	IllustratorCCEFBpAutoConvertBlends = 'e5c1',
	IllustratorCCEFBpRasterizeBlends = 'e5c2'
};
typedef enum IllustratorCCEFBp IllustratorCCEFBp;

enum IllustratorCCECoS {
	IllustratorCCECoSArtboardCoordinateSystem = 'eCo2',
	IllustratorCCECoSDocumentCoordinateSystem = 'eCo1'
};
typedef enum IllustratorCCECoS IllustratorCCECoS;

enum IllustratorCCESRp {
	IllustratorCCESRpSymbolBottomleftPoint = 'eSR7',
	IllustratorCCESRpSymbolBottommiddlePoint = 'eSR8',
	IllustratorCCESRpSymbolBottomrightPoint = 'eSR9',
	IllustratorCCESRpSymbolCenterPoint = 'eSR5',
	IllustratorCCESRpSymbolMiddleleftPoint = 'eSR4',
	IllustratorCCESRpSymbolMiddlerightPoint = 'eSR6',
	IllustratorCCESRpSymbolTopleftPoint = 'eSR1',
	IllustratorCCESRpSymbolTopmiddlePoint = 'eSR2',
	IllustratorCCESRpSymbolToprightPoint = 'eSR3'
};
typedef enum IllustratorCCESRp IllustratorCCESRp;

enum IllustratorCCEPPt {
	IllustratorCCEPPtFloorplane = 'ePP4',
	IllustratorCCEPPtLeftplane = 'ePP2',
	IllustratorCCEPPtNoplane = 'ePP1',
	IllustratorCCEPPtRightplane = 'ePP3'
};
typedef enum IllustratorCCEPPt IllustratorCCEPPt;

enum IllustratorCCEDST {
	IllustratorCCEDSTCascade = 'kACd',
	IllustratorCCEDSTConsolidateAll = 'kACA',
	IllustratorCCEDSTFloatAll = 'kAFA',
	IllustratorCCEDSTHorizontalTile = 'kAHT',
	IllustratorCCEDSTVerticalTile = 'kAVT'
};
typedef enum IllustratorCCEDST IllustratorCCEDST;

enum IllustratorCCECCP {
	IllustratorCCECCPDefaultPurpose = 'kDPU',
	IllustratorCCECCPDummyPurposeOption = 'kDUM',
	IllustratorCCECCPExportPurpose = 'kEPU',
	IllustratorCCECCPPreviewPurpose = 'kPPU'
};
typedef enum IllustratorCCECCP IllustratorCCECCP;

enum IllustratorCCEATK {
	IllustratorCCEATKAuto = 'eAE0',
	IllustratorCCEATKMetricsromanonly = 'eAEs',
	IllustratorCCEATKNone = 'ge01',
	IllustratorCCEATKOptical = 'eAE1'
};
typedef enum IllustratorCCEATK IllustratorCCEATK;

enum IllustratorCCEALD {
	IllustratorCCEALDBottomToBottom = 'eBtB',
	IllustratorCCEALDTopToTop = 'eTtT'
};
typedef enum IllustratorCCEALD IllustratorCCEALD;

enum IllustratorCCECCT {
	IllustratorCCECCTLowerCase = 'eAE4',
	IllustratorCCECCTSentenceCase = 'eAE6',
	IllustratorCCECCTTitleCase = 'eAE5',
	IllustratorCCECCTUpperCase = 'eAE3'
};
typedef enum IllustratorCCECCT IllustratorCCECCT;

enum IllustratorCCEFCO {
	IllustratorCCEFCOAllCaps = 'eAE8',
	IllustratorCCEFCOAllSmallCaps = 'eAE9',
	IllustratorCCEFCONormal = 'e110',
	IllustratorCCEFCOSmallCaps = 'eAE7'
};
typedef enum IllustratorCCEFCO IllustratorCCEFCO;

enum IllustratorCCEFBO {
	IllustratorCCEFBONormal = 'e110',
	IllustratorCCEFBOSubscript = 'pOT8',
	IllustratorCCEFBOSuperscript = 'pOT9'
};
typedef enum IllustratorCCEFBO IllustratorCCEFBO;

enum IllustratorCCCOTP {
	IllustratorCCCOTPDefault = 'pFS0',
	IllustratorCCCOTPDenominator = 'pOT7',
	IllustratorCCCOTPNumerator = 'pOT6',
	IllustratorCCCOTPSubscript = 'pOT8',
	IllustratorCCCOTPSuperscript = 'pOT9'
};
typedef enum IllustratorCCCOTP IllustratorCCCOTP;

enum IllustratorCCCFST {
	IllustratorCCCFSTDefault = 'pFS0',
	IllustratorCCCFSTProportional = 'pFS3',
	IllustratorCCCFSTProportionalOldstyle = 'pFS2',
	IllustratorCCCFSTTabular = 'pFS1',
	IllustratorCCCFSTTabularOldstyle = 'pFS4'
};
typedef enum IllustratorCCCFST IllustratorCCCFST;

enum IllustratorCCEBSD {
	IllustratorCCEBSDStandard = 'e080',
	IllustratorCCEBSDTateChuYoko = 'eAEd',
	IllustratorCCEBSDVerticalRotated = 'eAEc'
};
typedef enum IllustratorCCEBSD IllustratorCCEBSD;

enum IllustratorCCELNG {
	IllustratorCCELNGBokmalNorwegian = 'eL09',
	IllustratorCCELNGBrazillianPortuguese = 'eL12',
	IllustratorCCELNGBulgarian = 'eL21',
	IllustratorCCELNGCanadianFrench = 'eL04',
	IllustratorCCELNGCatalan = 'eL18',
	IllustratorCCELNGChinese = 'eL30',
	IllustratorCCELNGCzech = 'eL23',
	IllustratorCCELNGDanish = 'eL17',
	IllustratorCCELNGDutch = 'eL16',
	IllustratorCCELNGDutch2005Reform = 'eL43',
	IllustratorCCELNGEnglish = 'eL01',
	IllustratorCCELNGFinnish = 'eL02',
	IllustratorCCELNGGerman2006Reform = 'eL42',
	IllustratorCCELNGGreek = 'eL26',
	IllustratorCCELNGHungarian = 'eL29',
	IllustratorCCELNGIcelandic = 'eL28',
	IllustratorCCELNGItalian = 'eL08',
	IllustratorCCELNGJapanese = 'eL31',
	IllustratorCCELNGNynorskNorwegian = 'eL10',
	IllustratorCCELNGOldGerman = 'eL06',
	IllustratorCCELNGPolish = 'eL24',
	IllustratorCCELNGRomanian = 'eL25',
	IllustratorCCELNGRussian = 'eL19',
	IllustratorCCELNGSerbian = 'eL22',
	IllustratorCCELNGSpanish = 'eL13',
	IllustratorCCELNGStandardFrench = 'eL03',
	IllustratorCCELNGStandardGerman = 'eL05',
	IllustratorCCELNGStandardPortuguese = 'eL11',
	IllustratorCCELNGSwedish = 'eL14',
	IllustratorCCELNGSwissGerman = 'eL07',
	IllustratorCCELNGSwissGerman2006Reform = 'eL44',
	IllustratorCCELNGTurkish = 'eL27',
	IllustratorCCELNGUKEnglish = 'eL15',
	IllustratorCCELNGUkranian = 'eL20'
};
typedef enum IllustratorCCELNG IllustratorCCELNG;

enum IllustratorCCEAGF {
	IllustratorCCEAGFDefault = 'pFS0',
	IllustratorCCEAGFExpert = 'eAEf',
	IllustratorCCEAGFFullWidth = 'eAEo',
	IllustratorCCEAGFHalfWidth = 'eAEi',
	IllustratorCCEAGFJis04 = 'eAEr',
	IllustratorCCEAGFJis78 = 'eAEg',
	IllustratorCCEAGFJis83 = 'eAEh',
	IllustratorCCEAGFJis90 = 'eAEq',
	IllustratorCCEAGFProportionalWidth = 'eAEp',
	IllustratorCCEAGFQuarterWidth = 'eAEk',
	IllustratorCCEAGFThirdWidth = 'eAEj',
	IllustratorCCEAGFTraditional = 'eAEe'
};
typedef enum IllustratorCCEAGF IllustratorCCEAGF;

enum IllustratorCCESRA {
	IllustratorCCESRABottom = 'e177',
	IllustratorCCESRACenter = 'e122',
	IllustratorCCESRAIcfBottom = 'eAEl',
	IllustratorCCESRAIcfTop = 'eAEn',
	IllustratorCCESRARomanBaseline = 'eAEm',
	IllustratorCCESRATop = 'e175'
};
typedef enum IllustratorCCESRA IllustratorCCESRA;

enum IllustratorCCEWCJ {
	IllustratorCCEWCJAutoJustify = 'e129',
	IllustratorCCEWCJCenter = 'e122',
	IllustratorCCEWCJFullJustify = 'e128',
	IllustratorCCEWCJFullJustifyLastLineCenter = 'e127',
	IllustratorCCEWCJFullJustifyLastLineLeft = 'e125',
	IllustratorCCEWCJFullJustifyLastLineRight = 'e126',
	IllustratorCCEWCJLeft = 'e121',
	IllustratorCCEWCJRight = 'e123'
};
typedef enum IllustratorCCEWCJ IllustratorCCEWCJ;

enum IllustratorCCEPJ0 {
	IllustratorCCEPJ0Forced = 'ePJ1',
	IllustratorCCEPJ0None = 'ge01',
	IllustratorCCEPJ0Standard = 'e080'
};
typedef enum IllustratorCCEPJ0 IllustratorCCEPJ0;

enum IllustratorCCEPJ2 {
	IllustratorCCEPJ2PushIn = 'ePJ3',
	IllustratorCCEPJ2PushOutFirst = 'ePJ4',
	IllustratorCCEPJ2PushOutOnly = 'ePJ5'
};
typedef enum IllustratorCCEPJ2 IllustratorCCEPJ2;

enum IllustratorCCEFBT {
	IllustratorCCEFBTBaselineAscent = 'kBAS',
	IllustratorCCEFBTBaselineCapHeight = 'kBCH',
	IllustratorCCEFBTBaselineEmBoxHeight = 'kBEH',
	IllustratorCCEFBTBaselineFixed = 'kBFX',
	IllustratorCCEFBTBaselineLeading = 'kBLG',
	IllustratorCCEFBTBaselineLegacy = 'kBLY',
	IllustratorCCEFBTBaselineXHeight = 'kBXH'
};
typedef enum IllustratorCCEFBT IllustratorCCEFBT;

enum IllustratorCCELib {
	IllustratorCCELibBrushesLibrary = 'e197',
	IllustratorCCELibGraphicStylesLibrary = 'e198',
	IllustratorCCELibIllustratorArtwork = 'e195',
	IllustratorCCELibSwatchesLibrary = 'e196',
	IllustratorCCELibSymbolsLibrary = 'e199'
};
typedef enum IllustratorCCELib IllustratorCCELib;

enum IllustratorCCEDCt {
	IllustratorCCEDCtEps = 'e192',
	IllustratorCCEDCtFxg = 'e194',
	IllustratorCCEDCtIllustrator = 'e191',
	IllustratorCCEDCtPdf = 'e193'
};
typedef enum IllustratorCCEDCt IllustratorCCEDCt;

enum IllustratorCCCEFT {
	IllustratorCCCEFTAutoCAD = 'e337',
	IllustratorCCCEFTFlash = 'e336',
	IllustratorCCCEFTGIF = 'e335',
	IllustratorCCCEFTJPEG = 'e330',
	IllustratorCCCEFTPhotoshop = 'e331',
	IllustratorCCCEFTPNG24 = 'e334',
	IllustratorCCCEFTPNG8 = 'e333',
	IllustratorCCCEFTSVG = 'e332',
	IllustratorCCCEFTTIFF = 'e338'
};
typedef enum IllustratorCCCEFT IllustratorCCCEFT;

enum IllustratorCCCCRM {
	IllustratorCCCCRMAdaptive = 'e350',
	IllustratorCCCCRMPerceptual = 'e352',
	IllustratorCCCCRMSelective = 'e351',
	IllustratorCCCCRMWeb = 'e353'
};
typedef enum IllustratorCCCCRM IllustratorCCCCRM;

enum IllustratorCCCDtM {
	IllustratorCCCDtMDiffusion = 'e360',
	IllustratorCCCDtMNoise = 'e363',
	IllustratorCCCDtMNone = 'ge01',
	IllustratorCCCDtMPatternDither = 'e361'
};
typedef enum IllustratorCCCDtM IllustratorCCCDtM;

enum IllustratorCCEPAD {
	IllustratorCCEPADAllLayers = 'e463',
	IllustratorCCEPADVisibleLayers = 'e462',
	IllustratorCCEPADVisiblePrintableLayers = 'e461'
};
typedef enum IllustratorCCEPAD IllustratorCCEPAD;

enum IllustratorCCEPBD {
	IllustratorCCEPBDArtboardBounds = 'e471',
	IllustratorCCEPBDArtworkBounds = 'e472',
	IllustratorCCEPBDCropBounds = 'e473'
};
typedef enum IllustratorCCEPBD IllustratorCCEPBD;

enum IllustratorCCEPCS {
	IllustratorCCEPCSComposite = 'e481',
	IllustratorCCEPCSHostBasedSeparation = 'e482',
	IllustratorCCEPCSInRIPSeparation = 'e483'
};
typedef enum IllustratorCCEPCS IllustratorCCEPCS;

enum IllustratorCCEPOR {
	IllustratorCCEPORAutoRotate = 'e495',
	IllustratorCCEPORLandscape = 'e492',
	IllustratorCCEPORPortrait = 'e491',
	IllustratorCCEPORReverseLandscape = 'e494',
	IllustratorCCEPORReversePortrait = 'e493'
};
typedef enum IllustratorCCEPOR IllustratorCCEPOR;

enum IllustratorCCEPPO {
	IllustratorCCEPPOBottom = 'e177',
	IllustratorCCEPPOBottomLeft = 'e174',
	IllustratorCCEPPOBottomRight = 'e17A',
	IllustratorCCEPPOCenter = 'e122',
	IllustratorCCEPPOLeft = 'e121',
	IllustratorCCEPPORight = 'e123',
	IllustratorCCEPPOTop = 'e175',
	IllustratorCCEPPOTopLeft = 'e172',
	IllustratorCCEPPOTopRight = 'e178'
};
typedef enum IllustratorCCEPPO IllustratorCCEPPO;

enum IllustratorCCEPTL {
	IllustratorCCEPTLFullPages = 'e4a1',
	IllustratorCCEPTLImageableAreas = 'e4a2',
	IllustratorCCEPTLSingleFullPage = 'e4a0'
};
typedef enum IllustratorCCEPTL IllustratorCCEPTL;

enum IllustratorCCEPMS {
	IllustratorCCEPMSJapaneseStyle = 'e081',
	IllustratorCCEPMSRoman = 'eAE2'
};
typedef enum IllustratorCCEPMS IllustratorCCEPMS;

enum IllustratorCCEPFD {
	IllustratorCCEPFDComplete = 'e4c2',
	IllustratorCCEPFDNone = 'ge01',
	IllustratorCCEPFDSubset = 'e4c1'
};
typedef enum IllustratorCCEPFD IllustratorCCEPFD;

enum IllustratorCCEPFS {
	IllustratorCCEPFSDeviceSubstitution = 'e4d3',
	IllustratorCCEPFSObliqueSubstitution = 'e4d1',
	IllustratorCCEPFSTintSubstitution = 'e4d2'
};
typedef enum IllustratorCCEPFS IllustratorCCEPFS;

enum IllustratorCCEPIC {
	IllustratorCCEPICJPEG = 'e330',
	IllustratorCCEPICNone = 'ge01',
	IllustratorCCEPICRLE = 'e4e1'
};
typedef enum IllustratorCCEPIC IllustratorCCEPIC;

enum IllustratorCCEPCP {
	IllustratorCCEPCPCustomProfile = 'e4f4',
	IllustratorCCEPCPOldstyleProfile = 'e4f1',
	IllustratorCCEPCPPrinterProfile = 'e4f3',
	IllustratorCCEPCPSourceProfile = 'e4f2'
};
typedef enum IllustratorCCEPCP IllustratorCCEPCP;

enum IllustratorCCEPCI {
	IllustratorCCEPCIAbsoluteColorimetric = 'e4g3',
	IllustratorCCEPCIPerceptual = 'e352',
	IllustratorCCEPCIRelativeColorimetric = 'e4g2',
	IllustratorCCEPCISaturation = 'e4g1'
};
typedef enum IllustratorCCEPCI IllustratorCCEPCI;

enum IllustratorCCEPTY {
	IllustratorCCEPTYNonPostScriptPrinter = 'e4h2',
	IllustratorCCEPTYPostScriptPrinter = 'e4h1',
	IllustratorCCEPTYUnknown = 'e120'
};
typedef enum IllustratorCCEPTY IllustratorCCEPTY;

enum IllustratorCCEPCM {
	IllustratorCCEPCMBlackAndWhiteOutput = 'e4i3',
	IllustratorCCEPCMColorOutput = 'e4i1',
	IllustratorCCEPCMGrayscaleOutput = 'e4i2'
};
typedef enum IllustratorCCEPCM IllustratorCCEPCM;

enum IllustratorCCEPST {
	IllustratorCCEPSTConvertInk = 'e4j3',
	IllustratorCCEPSTDisableInk = 'e4j1',
	IllustratorCCEPSTEnableInk = 'e4j2'
};
typedef enum IllustratorCCEPST IllustratorCCEPST;

enum IllustratorCCEPIK {
	IllustratorCCEPIKBlackInk = 'pPmb',
	IllustratorCCEPIKCustomInk = 'pPmc',
	IllustratorCCEPIKCyanInk = 'pPm8',
	IllustratorCCEPIKMagentaInk = 'pPm9',
	IllustratorCCEPIKYellowInk = 'pPma'
};
typedef enum IllustratorCCEPIK IllustratorCCEPIK;

enum IllustratorCCEPTT {
	IllustratorCCEPTTIgnoreOpaque = 'e4l3',
	IllustratorCCEPTTNormal = 'e110',
	IllustratorCCEPTTOpaque = 'e4l2',
	IllustratorCCEPTTTransparent = 'e4l1'
};
typedef enum IllustratorCCEPTT IllustratorCCEPTT;

enum IllustratorCCETet {
	IllustratorCCETetAbuttingTracingMethod = 'eTMa',
	IllustratorCCETetOverlappingTracingMethod = 'eTMo'
};
typedef enum IllustratorCCETet IllustratorCCETet;

enum IllustratorCCETMt {
	IllustratorCCETMtBwTracingMode = 'eTMb',
	IllustratorCCETMtColorTracingMode = 'eTMc',
	IllustratorCCETMtGrayTracingMode = 'eTMg'
};
typedef enum IllustratorCCETMt IllustratorCCETMt;

enum IllustratorCCETCt {
	IllustratorCCETCtUseFullColors = 'eTCf',
	IllustratorCCETCtUseLimitedColors = 'eTCl'
};
typedef enum IllustratorCCETCt IllustratorCCETCt;

enum IllustratorCCETvv {
	IllustratorCCETvvViewOutlines = 'eTv3',
	IllustratorCCETvvViewOutlinesWithTracing = 'eTv2',
	IllustratorCCETvvViewOutlinesWithTransparentImage = 'eTv4',
	IllustratorCCETvvViewSourceImage = 'eTv5',
	IllustratorCCETvvViewTracingResult = 'eTv1'
};
typedef enum IllustratorCCETvv IllustratorCCETvv;

enum IllustratorCC {
	IllustratorCCIllustrator3 = 'e2x2',
	IllustratorCCPDFX32001 = 'ePd3'
} __attribute__((deprecated));
typedef enum IllustratorCC IllustratorCC __attribute__((deprecated));



/*
 * Core Suite
 */

// The Adobe Illustrator application
@interface IllustratorCCApplication : SBApplication

- (SBElementArray *) documents;
- (SBElementArray *) textFonts __attribute__((deprecated));

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) BOOL browserAvailable;  // is a web browser available?
@property (copy, readonly) NSString *buildNumber;  // the build number of the Adobe Illustrator application
@property (copy, readonly) NSArray *colorSettings;  // the list of color settings files currently available for use
@property IllustratorCCECoS coordinateSystem;  // Coordinate System used by script
@property (copy, readonly) NSString *currentAdobeId;  // The current users adobe id
@property (copy) IllustratorCCDocument *currentDocument;  // The active document
@property (copy, readonly) NSString *currentUserGuid;  // The current user's GUID
@property (copy, readonly) NSURL *defaultColorSettings;  // the default color settings file for the current application locale.
@property (copy, readonly) NSArray *flattenerPresets;  // the list of flattener style names currently available for use
@property (readonly) NSInteger freeMemory;  // the amount of unused memory within the Adobe Illustrator partition
@property (readonly) BOOL frontmost;  // Is this the frontmost application?
@property (copy, readonly) NSString *locale;  // the Locale of the Adobe Illustrator application
@property (copy, readonly) NSString *name;  // The application's name
@property BOOL pasteRemembersLayers;  // does paste operation remember layers structure?
@property (copy, readonly) NSArray *PDFPresets;  // the list of PDF preset names currently available for use
@property (copy, readonly) NSArray *PPDs;  // the list of PPD files currently available for use. For performance reasons, the PPDFile entry only contains the model name and file spec of each PPD file.
@property (copy, readonly) NSArray *printPresets;  // the list of print preset names currently available for use
@property (copy, readonly) NSArray *printers;  // the list of installed printers
@property (copy, readonly) NSString *scriptingVersion;  // the version of the Scripting plugin
@property (copy) id selection;  // the selection visible to the user
@property (copy, readonly) IllustratorCCIllustratorPreferences *settings;  // preferences for Illustrator
@property (copy, readonly) NSArray *startupPresets;  // the list of presets available for creating a new document
@property (copy, readonly) NSArray *tracingPresets;  // the list of tracing preset names currently available for use
@property IllustratorCCEMUI userInteractionLevel;  // what level of interaction with the user should be allowed when handling script commands
@property (copy, readonly) NSString *version;  // the version of the Adobe Illustrator application

- (void) executeAATFileFile:(NSURL *)file;  // executes the active session in the sequencer
- (IllustratorCCPPDProperties *) getPPDInfoFor:(NSString *)for_;  // get detailed info from the specified PPD file
- (void) loadColorSettingsFrom:(NSURL *)from;  // load the color settings from the file. If the file is an empty file spec, the color management will be turned off.
- (void) open:(id)x forcing:(IllustratorCCECCS)forcing dialogs:(BOOL)dialogs withOptions:(id)withOptions;  // Open the specified document file(s)
- (void) print:(id)x options:(IllustratorCCPrintOptions *)options;  // Print the specified document(s) or file(s)
- (void) quit;  // Quit the application
- (NSArray *) showPresetsFrom:(NSURL *)from;  // get presets from the file
- (BOOL) deleteWorkspaceWorkspaceName:(NSString *)workspaceName;  // Deletes an existing workspace
- (id) getScriptableHelpGroup;  // Get the scriptable help group object that represents the search widget in the app bar
- (void) redraw;  // Force Illustrator to redraw its window(s)
- (void) reflectCsawTo:(NSURL *)to;  // generate Creative Suite ActionScript Wrappers in specified directory
- (BOOL) resetWorkspace;  // Resets the current workspace
- (BOOL) saveWorkspaceWorkspaceName:(NSString *)workspaceName;  // Saves a new workspace
- (BOOL) switchWorkspaceWorkspaceName:(NSString *)workspaceName;  // Switches between workspaces
- (NSArray *) convertSampleColorSourceColorSpace:(IllustratorCCECLS)sourceColorSpace sourceColor:(NSArray *)sourceColor destinationColorSpace:(IllustratorCCECLS)destinationColorSpace colorConversionPurpose:(IllustratorCCECCP)colorConversionPurpose sourceHasAlpha:(BOOL)sourceHasAlpha destinationHasAlpha:(BOOL)destinationHasAlpha;  // Converts a sample-component color from one color space to another.
- (NSString *) translatePlaceholderText:(NSString *)x;  // translate the placeholder text to regular text. A method to enter unicode points in hex values.
- (IllustratorCCMatrix *) getIdentityMatrix;  // Returns an identity matrix
- (IllustratorCCMatrix *) getRotationMatrixAngle:(double)angle;  // Returns a rotation transformation matrix
- (IllustratorCCMatrix *) getScaleMatrixHorizontalScale:(double)horizontalScale verticalScale:(double)verticalScale;  // Returns a scale transformation matrix
- (IllustratorCCMatrix *) getTranslationMatrixDeltaX:(double)deltaX deltaY:(double)deltaY;  // Returns a translation matrix
- (void) copy NS_RETURNS_NOT_RETAINED;  // Copy current selection to the clipboard
- (void) cut;  // Cut current selection to the clipboard
- (NSString *) doJavascript:(id)x withArguments:(NSArray *)withArguments showDebugger:(IllustratorCCE940)showDebugger;  // execute a javascript
- (void) doScript:(NSString *)x from:(NSString *)from dialogs:(BOOL)dialogs;  // Play an action from the Actions Palette
- (void) executeMenuCommandMenuCommandString:(NSString *)menuCommandString;  // executes a menu command using the menu shortcut string
- (NSURL *) getPresetFileOfPresetType:(IllustratorCCEDPT)presetType;  // given a preset type, returns the full path to the application's default document profile for the type
- (IllustratorCCDocumentPreset *) getPresetSettingsPreset:(NSString *)preset;  // given a preset name, tries and retrieves the settings from the preset template
- (void) loadActionActionFilePath:(NSURL *)actionFilePath;  // Load an action into action palette
- (void) paste;  // Paste clipboard into the current document
- (void) redo;  // Redo the last transaction
- (void) undo;  // Undo the last transaction
- (void) unloadActionActionFilePath:(NSString *)actionFilePath actionFilePath:(NSString *)actionFilePath;  // unloads an action into action palette

@end

// A document
@interface IllustratorCCDocument : SBObject

- (SBElementArray *) artboards;
- (SBElementArray *) brushes;
- (SBElementArray *) characterStyles;
- (SBElementArray *) compoundPathItems;
- (SBElementArray *) datasets;
- (SBElementArray *) gradients;
- (SBElementArray *) graphicStyles;
- (SBElementArray *) graphItems;
- (SBElementArray *) groupItems;
- (SBElementArray *) layers;
- (SBElementArray *) legacyTextItems;
- (SBElementArray *) meshItems;
- (SBElementArray *) nonNativeItems;
- (SBElementArray *) pageItems;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) pathItems;
- (SBElementArray *) patterns;
- (SBElementArray *) placedItems;
- (SBElementArray *) pluginItems;
- (SBElementArray *) rasterItems;
- (SBElementArray *) spots;
- (SBElementArray *) stories;
- (SBElementArray *) swatches;
- (SBElementArray *) swatchgroups;
- (SBElementArray *) symbolItems;
- (SBElementArray *) symbols;
- (SBElementArray *) tags;
- (SBElementArray *) textFrames;
- (SBElementArray *) variables;
- (SBElementArray *) views;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) IllustratorCCECCS colorSpace;  // the color space used for the document
@property (copy) NSArray *cropMarks;
@property IllustratorCCECRs cropStyle;
@property (copy) IllustratorCCDataset *currentDataset;  // The active data set
@property (copy) IllustratorCCLayer *currentLayer;  // The active layer
@property (copy, readonly) IllustratorCCView *currentView;  // the document's current view
@property (copy) IllustratorCCColorInfo *defaultFillColor;  // default fill color
@property BOOL defaultFillOverprint;  // will art beneath a filled object be overprinted by default?
@property BOOL defaultFilled;  // should a new path be filled?
@property IllustratorCCESTc defaultStrokeCap;  // default type of line capping
@property (copy) IllustratorCCColorInfo *defaultStrokeColor;  // default stroke color
@property double defaultStrokeDashOffset;  // the default distance into the dash pattern at which the pattern should be started
@property (copy) NSArray *defaultStrokeDashes;  // default dash lengths (set to {} for a solid line)
@property IllustratorCCESTj defaultStrokeJoin;  // default type of joints
@property double defaultStrokeMiterLimit;  // specifies whether a join is mitered (pointed) or beveled (squared-off) by default
@property BOOL defaultStrokeOverprint;  // will art beneath a stroked object be overprinted by default?
@property double defaultStrokeWidth;  // default width of stroke
@property BOOL defaultStroked;  // should a new path be stroked?
@property (copy, readonly) NSURL *filePath;  // the file associated with the document
@property (copy, readonly) NSArray *geometricBounds;  // the bounds of the illustration excluding stroke width
@property (readonly) double height;
@property (copy, readonly) NSArray *inks;  // the list of inks in this document
@property (copy, readonly) NSArray *KinsokuSet;  // the Kinsoku set
@property BOOL modified;  // Has the document been modified since the last save?
@property (copy, readonly) NSArray *MojikumiSet;  // the Mojikumi set
@property (copy, readonly) NSString *name;  // The document's name
@property (readonly) double outputResolution;
@property (copy) NSArray *pageOrigin;
@property (readonly) BOOL printTiles;
@property (copy) IllustratorCCRasterEffectOptions *rasterEffectSettings;  // The document raster effects settings
@property (copy) NSArray *rulerOrigin;
@property (readonly) IllustratorCCERUt rulerUnits;
@property (copy) id selection;  // the selection within the document
@property (readonly) BOOL showPlacedImages;
@property (readonly) BOOL splitLongPaths;
@property (readonly) BOOL stationery;  // Is the file a stationery file?
@property (readonly) BOOL tileFullPages;
@property (readonly) BOOL useDefaultScreen;
@property BOOL variablesLocked;  // The locked variables
@property (copy, readonly) NSArray *visibleBounds;  // the visible bounds of the illustration including stroke width
@property (readonly) double width;
@property (copy) NSString *XMPString;  // The XMP packet string associated with the document

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) closeSaving:(IllustratorCCSavo)saving;  // Close the specified document(s)
- (IllustratorCCDocument *) saveIn:(NSURL *)in_ as:(IllustratorCCEDCt)as withOptions:(id)withOptions;  // Save the specified document(s)
- (void) captureTo:(NSURL *)to size:(NSArray *)size;  // capture the current document window to the target TIFF image file.
- (NSArray *) convertcoordinateCoordinate:(NSArray *)coordinate source:(IllustratorCCECoS)source destination:(IllustratorCCECoS)destination;  // Converts the coordinate system of a single point from one coordinate system to another.
- (void) exportTo:(NSURL *)to as:(IllustratorCCCEFT)as withOptions:(id)withOptions;  // Export the specified document(s)
- (void) exportPerspectiveGridPresetTo:(NSURL *)to;  // saves all perspective grid presets to a file
- (BOOL) fitartboardtoselectedartIndex:(NSInteger)index;  // Change the artboard to selected art bounds.
- (IllustratorCCEPPt) getPerspectiveActivePlane;  // Gets the active plane of the active perspective grid of the document
- (BOOL) hidePerspectiveGrid;  // Hides the current active perspective grid for the document, if there is visible perspective grid.
- (void) importPerspectiveGridPresetFrom:(NSURL *)from perspectivePreset:(NSString *)perspectivePreset;  // loads mentioned perspective grid preset, if preset name is specified, else loads all(if no preset name is specified) presets, from the specified file
- (IllustratorCCPageItem *) rasterizeSourceArt:(id)sourceArt inside:(NSArray *)inside withOptions:(IllustratorCCRasterizeOptions *)withOptions;  // rasterize the source art(s) within the specified clip bounds. The source art(s) are disposed as a result of the rasterization.
- (BOOL) rearrangeartboardsArtboardLayout:(IllustratorCCEDAL)artboardLayout artboardRowsOrCols:(NSInteger)artboardRowsOrCols artboardSpacing:(double)artboardSpacing artboardMoveArtwork:(BOOL)artboardMoveArtwork;  // Rearrange Artboards in the document
- (BOOL) selectPerspectivePresetPerspectivePreset:(NSString *)perspectivePreset;  // Selects a predefined preset to define grid for the current document.
- (BOOL) selectobjectsonactiveartboard;  // Select art objects in active artboard.
- (BOOL) setPerspectiveActivePlanePerspectiveGridPlane:(IllustratorCCEPPt)perspectiveGridPlane;  // Sets the active perspective plane for the active grid of the document.
- (BOOL) showPerspectiveGrid;  // Shows the current active perspective grid for the document, if no active perspective grid then shows the default perspective grid for the document
- (void) importCharacterStylesFrom:(NSURL *)from;  // load the character styles from the Illustrator file
- (void) importParagraphStylesFrom:(NSURL *)from;  // load the paragraph styles from the Illustrator file
- (void) exportPDFPresetTo:(NSURL *)to;  // save all PDF presets to a file
- (void) importPDFPresetFrom:(NSURL *)from replacingPreset:(BOOL)replacingPreset;  // load all PDF presets from a file
- (void) exportVariablesTo:(NSURL *)to;  // Save datasets into an XML library. The datasets contain variables and their associated dynamic data
- (void) importVariablesFrom:(NSURL *)from;  // Import a library containing datasets, variables and their associated dynamic data. Importing variables will overwrite existing variables and datasets
- (void) exportPrintPresetTo:(NSURL *)to;  // export the current print setting to the preset file
- (void) importPrintPresetPrintPreset:(NSString *)printPreset from:(NSURL *)from;  // apply the named print preset from the file to the current print setting

@end

// create a document from the preset
@interface IllustratorCCArtwork : SBObject

@property (copy) NSString *startupPreset;  // the name of startup document preset
@property (copy) IllustratorCCDocumentPreset *presetSettings;  // the custom document preset settings

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Adobe Illustrator Suite
 */

// an artboard object
@interface IllustratorCCArtboard : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) NSArray *artboardRectangle;  // size and position of artboard
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The name of the artboard
@property (copy) NSArray *rulerOrigin;  // Ruler origin of artboard.It is relative to left-bottom corner of the Artboard.
@property double rulerPAR;  // Pixel aspect ratio, used in ruler visualization if the units are pixels ( 0.1 - 10.0 )
@property BOOL showCenter;  // Show center mark
@property BOOL showCrossHairs;  // Show cross hairs
@property BOOL showSafeAreas;  // Show title and action safe areas (for video)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A brush
@interface IllustratorCCBrush : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The brush's name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the new document preset to use for creating a new document
@interface IllustratorCCDocumentPreset : SBObject

@property IllustratorCCEDAL artboardLayout;  // layout for artboards ( default: grid by row )
@property NSInteger artboardRowsOrCols;  // Number of rows (for rows layout) OR column(for column layouts)of artboards.Range is 1 to (docNumArtboards - 1) or 1 for single row or column layouts ( default: 1 )
@property double artboardSpacing;  // spacing between artboards ( default: 20.0 )
@property IllustratorCCECCS colorMode;  // the color mode for the new document ( default: CMYK )
@property IllustratorCCERUt documentUnits;  // the units for the new document ( default: points )
@property double height;  // the height for the new document ( default: 792.0 )
@property NSInteger numArtboards;  // number of artboards for new document.Range (1:100). ( default: 1 )
@property IllustratorCCEDPM previewMode;  // the preview mode for the new document ( default: default preview )
@property IllustratorCCEDCR rasterResolution;  // the raster resolution for the new document ( default: screen resolution )
@property (copy) NSString *title;  // the title for the new document ( default: Untitled )
@property IllustratorCCEDGR transparencyGrid;  // the transparency grid for the new document ( default: hide transparency grids )
@property double width;  // the width for the new document ( default: 612.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A gradient
@interface IllustratorCCGradient : SBObject

- (SBElementArray *) gradientStops;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSArray *entireGradient;  // all the gradient stops in the gradient
@property IllustratorCCEGDt gradientType;  // the gradient type
@property (copy) NSString *name;  // the gradient's name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A gradient stop
@interface IllustratorCCGradientStop : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) IllustratorCCColorInfo *color;  // the color linked to this gradient stop
@property (copy, readonly) SBObject *container;  // the object's container
@property double midpoint;  // midpoint key value in percent ( 13.0 - 87.0 )
@property double rampPoint;  // location of color in the blend (in percent) ( 0.0 - 100.0 )
@property double stopOpacity;  // The opacity (between 0.0 and 100.0) value for the gradient stop ( 0.0 - 100.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Gradient stop information (returned by entire gradient of gradient class)
@interface IllustratorCCGradientStopInfo : SBObject

@property (copy) IllustratorCCColorInfo *color;  // the color linked to this gradient stop
@property double midpoint;  // midpoint value in percent ( 13.0 - 87.0; default: 50.0 )
@property double rampPoint;  // location of color in the blend in percent ( 0.0 - 100.0; default: 0.0 )
@property double stopOpacity;  // The opacity value for the gradient stop ( 0.0 - 100.0; default: 1.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// An art style
@interface IllustratorCCGraphicStyle : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The art style's name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) applyTo:(id)to;  // Apply a brush or art style to object(s)
- (void) mergeTo:(id)to;  // Merge an art style to object(s) current style(s)

@end

// Preferences for Illustrator
@interface IllustratorCCIllustratorPreferences : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) IllustratorCCAutoCADOptions *AutoCADFileOptions;  // options to use when opening or placing a AutoCAD file
@property (copy, readonly) IllustratorCCPDFOptions *PDFFileOptions;  // options to use when opening or placing a PDF file
@property (copy, readonly) IllustratorCCPhotoshopOptions *PhotoshopFileOptions;  // options to use when opening or placing a Photoshop file

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) deletePreferenceKey:(NSString *)key;  // delete the application preference key
- (BOOL) getBooleanPreferenceKey:(NSString *)key;  // retrieve the value of the application preference key as boolean
- (NSInteger) getIntegerPreferenceKey:(NSString *)key;  // retrieve the value of the application preference key as integer
- (double) getRealPreferenceKey:(NSString *)key;  // retrieve the value of the application preference key as real number
- (NSString *) getStringPreferenceKey:(NSString *)key;  // retrieve the value of the application preference key as string type
- (void) setBooleanPreferenceKey:(NSString *)key to:(BOOL)to;  // set the value of the application preference key as boolean
- (void) setIntegerPreferenceKey:(NSString *)key to:(NSInteger)to;  // set the value of the application preference key as integer
- (void) setRealPreferenceKey:(NSString *)key to:(double)to;  // set the value of the application preference key as real number
- (void) setStringPreferenceKey:(NSString *)key to:(NSString *)to;  // set the value of the application preference key as string type

@end

// A layer
@interface IllustratorCCLayer : SBObject

- (SBElementArray *) compoundPathItems;
- (SBElementArray *) graphItems;
- (SBElementArray *) groupItems;
- (SBElementArray *) layers;
- (SBElementArray *) legacyTextItems;
- (SBElementArray *) meshItems;
- (SBElementArray *) nonNativeItems;
- (SBElementArray *) pageItems;
- (SBElementArray *) pathItems;
- (SBElementArray *) placedItems;
- (SBElementArray *) pluginItems;
- (SBElementArray *) rasterItems;
- (SBElementArray *) symbolItems;
- (SBElementArray *) textFrames;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property IllustratorCCCBlM blendMode;  // the mode used when compositing an object
@property (copy) IllustratorCCRGBColorInfo *color;  // color used when outlining artwork in this layer
@property (copy, readonly) SBObject *container;  // the object's container
@property BOOL dimPlacedImages;  // Is rendered as dimmed in this layer?
@property BOOL hasSelectedArtwork;  // Is any artwork in this layer selected? Setting this property to false deselects all artwork in the layer.
@property BOOL isolated;  // is the artwork isolated
@property IllustratorCCCKOS knockout;  // is the artwork used to create a knockout
@property BOOL locked;  // Is the layer editable?
@property (copy) NSString *name;  // The layer's name
@property double opacity;  // The layer's opacity (between 0.0 and 100.0)
@property BOOL preview;  // Is the layer rendered in preview mode?
@property BOOL printable;  // Is the layer printable?
@property BOOL sliced;  // Is the layer sliced (default: false)
@property BOOL visible;  // Is the layer visible?

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A page item object
@interface IllustratorCCPageItem : SBObject

- (SBElementArray *) tags;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property IllustratorCCCBlM blendMode;  // the mode used when compositing an object
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy, readonly) NSArray *controlBounds;  // the bounds of the artwork including stroke width and controls
@property (readonly) BOOL editable;  // can the art item be modified
@property (copy, readonly) NSArray *geometricBounds;  // the bounds of the artwork excluding stroke width
@property double height;  // the height of the art item ( 0.0 - 16348.0 )
@property BOOL hidden;  // is this artwork item hidden?
@property BOOL isolated;  // is the artwork isolated
@property IllustratorCCCKOS knockout;  // is the artwork used to create a knockout
@property (copy, readonly) IllustratorCCLayer *layer;  // the layer to which this artwork belongs
@property BOOL locked;  // is this artwork item locked?
@property (copy) NSString *name;  // The item's name
@property (copy) NSString *note;  // the note assigned to this artwork item
@property double opacity;  // the object's opacity (between 0.0 and 100.0) ( 0.0 - 100.0 )
@property BOOL pixelAligned;  // is this artwork item aligned to Pixel Grid?
@property (copy) NSArray *position;  // the position of the top left corner of the art item
@property BOOL selected;  // is this artwork item selected?
@property BOOL sliced;  // is the art item sliced (default: false)
@property (copy) NSString *URL;  // the value of the Adobe URL tag assigned to this artwork item
@property (copy) id visibilityVariable;  // the visibility variable bound to this page item
@property (copy, readonly) NSArray *visibleBounds;  // the visible bounds of the artwork including stroke width
@property double width;  // the width of the art item ( 0.0 - 16348.0 )
@property BOOL wrapInside;  // should the text frame object be wrapped inside this object?
@property double wrapOffset;  // use this offset when wrapping text around this object
@property BOOL wrapped;  // wrap text frame objects around this object (text frame must be above the object)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) applyeffectLiveeffectxml:(NSString *)liveeffectxml;  // Apply effect to selected artItem
- (void) bringInPerspectivePositionX:(double)positionX positionY:(double)positionY perspectiveGridPlane:(IllustratorCCEPPt)perspectiveGridPlane;  // Place art object(s)in perspective grid at spedified perspective plane and coordinate
- (void) rotateAngle:(double)angle transformingObjects:(BOOL)transformingObjects transformingFillPatterns:(BOOL)transformingFillPatterns transformingFillGradients:(BOOL)transformingFillGradients transformingStrokePatterns:(BOOL)transformingStrokePatterns about:(IllustratorCCETRt)about;  // Rotate art object(s)
- (void) scaleHorizontalScale:(double)horizontalScale verticalScale:(double)verticalScale transformingObjects:(BOOL)transformingObjects transformingFillPatterns:(BOOL)transformingFillPatterns transformingFillGradients:(BOOL)transformingFillGradients transformingStrokePatterns:(BOOL)transformingStrokePatterns lineScale:(double)lineScale about:(IllustratorCCETRt)about;  // Scale art object(s)
- (void) translateDeltaX:(double)deltaX deltaY:(double)deltaY transformingObjects:(BOOL)transformingObjects transformingFillPatterns:(BOOL)transformingFillPatterns transformingFillGradients:(BOOL)transformingFillGradients transformingStrokePatterns:(BOOL)transformingStrokePatterns;  // Reposition art object(s)
- (void) transformUsing:(IllustratorCCMatrix *)using_ transformingObjects:(BOOL)transformingObjects transformingFillPatterns:(BOOL)transformingFillPatterns transformingFillGradients:(BOOL)transformingFillGradients transformingStrokePatterns:(BOOL)transformingStrokePatterns lineScale:(double)lineScale about:(IllustratorCCETRt)about;  // Transform art object(s) using a transformation matrix
- (NSString *) SendScriptMessageActionPluginName:(NSString *)pluginName messageSelector:(NSString *)messageSelector parameterString:(NSString *)parameterString;  // sends the script message to the required plugin

@end

// Compound path artwork item
@interface IllustratorCCCompoundPathItem : IllustratorCCPageItem

- (SBElementArray *) pathItems;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record


@end

// Graph artwork item
@interface IllustratorCCGraphItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) id contentVariable;  // the content variable bound to this graph


@end

// An artwork group item
@interface IllustratorCCGroupItem : IllustratorCCPageItem

- (SBElementArray *) compoundPathItems;
- (SBElementArray *) graphItems;
- (SBElementArray *) groupItems;
- (SBElementArray *) legacyTextItems;
- (SBElementArray *) meshItems;
- (SBElementArray *) nonNativeItems;
- (SBElementArray *) pageItems;
- (SBElementArray *) pathItems;
- (SBElementArray *) placedItems;
- (SBElementArray *) pluginItems;
- (SBElementArray *) rasterItems;
- (SBElementArray *) symbolItems;
- (SBElementArray *) textFrames;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property BOOL clipped;  // are the group elements clipped to the clipping path?


@end

// unconverted legacy text items from documents in pre-version 11 formats
@interface IllustratorCCLegacyTextItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) BOOL converted;  // has the legacy text item been updated to a native text frame item?

- (IllustratorCCGroupItem *) convert;  // create a native text frame from a legacy text item. The original legacy text item is deleted.

@end

// Mesh artwork item
@interface IllustratorCCMeshItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record


@end

// Non-native artwork item
@interface IllustratorCCNonNativeItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record


@end

// An artwork path item
@interface IllustratorCCPathItem : IllustratorCCPageItem

- (SBElementArray *) pathPoints;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) double area;  // the area of this path in square points
@property BOOL clipping;  // should this be used as a clipping path?
@property BOOL closed;  // is this path closed?
@property (copy) NSArray *entirePath;  // all the path item's path points
@property BOOL evenodd;  // should the even-odd rule be used to determine insideness?
@property (copy) IllustratorCCColorInfo *fillColor;  // fill color
@property BOOL fillOverprint;  // will art beneath a filled object be overprinted?
@property BOOL filled;  // should the path be filled?
@property BOOL guides;  // is this path a guide object?
@property (readonly) double length;  // the length of this path in points
@property IllustratorCCEPVu polarity;  // the polarity the path
@property double resolution;  // The resolution of the path
@property (copy, readonly) NSArray *selectedPathPoints;  // all the selected points in the path
@property IllustratorCCESTc strokeCap;  // type of line capping
@property (copy) IllustratorCCColorInfo *strokeColor;  // stroke color
@property double strokeDashOffset;  // the default distance into the dash pattern at which the pattern should be started
@property (copy) NSArray *strokeDashes;  // dash lengths (set to {} for a solid line)
@property IllustratorCCESTj strokeJoin;  // type of joints
@property double strokeMiterLimit;  // whether a join is mitered (pointed) or beveled (squared-off)
@property BOOL strokeOverprint;  // will art beneath a stroked object be overprinted?
@property double strokeWidth;  // width of stroke
@property BOOL stroked;  // should the path be stroked?


@end

// A point on a path
@interface IllustratorCCPathPoint : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) NSArray *anchor;  // the position (coordinates) of the anchor point
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSArray *leftDirection;  // location of the left direction point (in position)
@property IllustratorCCEPTy pointType;  // the type of point: smooth/corner
@property (copy) NSArray *rightDirection;  // location of the right direction point (out position)
@property IllustratorCCESGs selected;  // the path point selected state

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Path point information (returned by entire path dataClassProperty of path item class)
@interface IllustratorCCPathPointInfo : SBObject

@property (copy) NSArray *anchor;  // the position of the anchor (in coordinates)
@property (copy) NSArray *leftDirection;  // location of the left direction point (in position)
@property IllustratorCCEPTy pointType;  // the point type, smooth/corner ( default: smooth )
@property (copy) NSArray *rightDirection;  // location of the left direction point (out position)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Placed artwork item
@interface IllustratorCCPlacedItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) NSArray *boundingBox;  // dimensions of placed art object, regardless of transformations
@property (copy) id contentVariable;  // the content variable bound to this placed art object
@property (copy) NSURL *filePath;  // the file containing the placed artwork
@property (copy) IllustratorCCMatrix *matrix;  // The transformation matrix of the placed art object

- (void) embed;  // Embed the placed art within the illustration
- (void) relinkFrom:(NSURL *)from;  // Relink the placed art with supplied art from file
- (IllustratorCCPluginItem *) tracePlaced;  // Trace this raster object using default options.  Reorders this placed to the source art.

@end

// Plugin artwork item
@interface IllustratorCCPluginItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) BOOL isTracing;  // is the plugin group a tracing?
@property (copy, readonly) IllustratorCCTracingobject *tracing;  // the tracing object associated with this plugin item.


@end

// The document raster effects settings
@interface IllustratorCCRasterEffectOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: false )
@property BOOL clippingMask;  // should a clipping mask be created for the resulting image ( default: false )
@property IllustratorCCERAS colorModel;  // The color model for the rasterization ( default: default rasterization )
@property BOOL convertSpotColors;  // whether to convert all spot colors to process colors in the resulting image ( default: false )
@property double padding;  // the amount of white space (in points) to be added around the object during rasterization ( default: 0.0 )
@property double resolution;  // The rasterization resolution in dots-per-inch (dpi) ( 72.0 - 2400.0; default: 300.0 )
@property BOOL transparency;  // should the resulting image use transparency ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Raster artwork item
@interface IllustratorCCRasterItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) NSInteger bitsPerChannel;  // the number of bits per channel
@property (copy) NSArray *boundingBox;  // dimensions of raster art object regardless of transformations
@property (readonly) NSInteger channels;  // the number of image channels
@property (readonly) IllustratorCCECLS colorSpace;  // the color space of the raster image
@property (copy, readonly) NSArray *colorants;  // list of colorant names
@property (readonly) BOOL colorized;  // is the raster art a colorized grayscale image?
@property (copy) id contentVariable;  // the content variable bound to this raster art object
@property BOOL embedded;  // is the raster art embedded within the illustration?
@property (copy, readonly) NSURL *filePath;  // the file containing the raster artwork
@property (copy) IllustratorCCMatrix *matrix;  // The transformation matrix of the raster art object
@property BOOL overprint;  // is the raster art overprinting?
@property (readonly) IllustratorCCERLt status;  // status of the linked image
@property (readonly) BOOL transparent;  // is the raster art transparent?

- (void) colorizeRasterColor:(IllustratorCCColorInfo *)rasterColor;  // Colorize the RasterItem with a CMYK or RGB Color
- (IllustratorCCPluginItem *) traceRaster;  // Trace this raster object using default options.  Reorders this raster to the source art.

@end

// Options which may be supplied when rasterizing the artwork
@interface IllustratorCCRasterizeOptions : SBObject

@property IllustratorCCEALS antialiasingMethod;  // the type of antialiasing method ( default: art optimized )
@property BOOL backgroundBlack;  // should rasterize against a black background instead of white ( default: false )
@property BOOL clippingMask;  // should a clipping mask be created for the resulting image ( default: false )
@property IllustratorCCERAS colorModel;  // The color model for the rasterization ( default: default rasterization )
@property BOOL convertSpotColors;  // whether to convert all spot colors to process colors in the resulting image ( default: false )
@property BOOL convertTextToOutlines;  // should all text be converted to outlines before rasterization ( default: false )
@property BOOL includeLayers;  // should the resulting image incorporates the layer attributes (such as opacity and blend mode) ( default: false )
@property double padding;  // the amount of white space (in points) to be added around the object during rasterization ( default: 0.0 )
@property double resolution;  // The rasterization resolution in dots-per-inch (dpi) ( 72.0 - 2400.0; default: 300.0 )
@property BOOL transparency;  // should the resulting image use transparency ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A symbol
@interface IllustratorCCSymbol : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The symbol's name
@property (copy, readonly) id sourceArt;  // The source art is only used when creating a new symbol

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// An instance of a Symbol
@interface IllustratorCCSymbolItem : IllustratorCCPageItem

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) IllustratorCCSymbol *symbol;  // The symbol that was used to create this symbol item


@end

// Tab stop information (returned by tab stops from a paragraph object)
@interface IllustratorCCTabStopInfo : SBObject

@property IllustratorCCETBa alignment;  // the alignment of the tab stop ( default: left )
@property (copy) NSString *decimalCharacter;  // the character used for decimal tab stops ( default: . )
@property (copy) NSString *leader;  // the leader dot
@property double position;  // the position of the tab stop expressed in points ( default: 0.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A tag associated with a piece of artwork
@interface IllustratorCCTag : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The tag's name
@property (copy) NSString *value;  // the data stored in this tag

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// fonts
__attribute__((deprecated)) @interface IllustratorCCFont : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) NSString *family;  // the font's family name
@property (copy, readonly) NSString *name;  // The font's full name
@property (copy, readonly) NSString *style;  // the font's style name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Text frame item
@interface IllustratorCCTextFrame : IllustratorCCPageItem

- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) NSArray *anchor;  // the position of the anchor point (start of base line for point text)
@property IllustratorCCETAa antialias;  // the type of a text anti-aliasing on text frame item
@property NSInteger columnCount;  // the column count in the text frame (area text only)
@property double columnGutter;  // the column gutter in the text frame (area text only)
@property (copy) id contentVariable;  // the content variable bound to this text art item
@property (copy) NSString *contents;  // the text contents of this text frame
@property double endTValue;  // the end position of text along a path, as a value relative to the path's segments (path text only)
@property IllustratorCCEFBT firstBaseline;  // the first baseline offset type for text frame item (for Area Text only)
@property double firstBaselineMin;  // the first baseline offset minimum value for text frame item (for Area Text only)
@property BOOL flowLinksHorizontally;  // Flow text between linked frame horizontally first. (area text only)
@property (readonly) IllustratorCCETXt kind;  // the type of a text frame item
@property (copy, readonly) IllustratorCCMatrix *matrix;  // The transformation matrix of the text frame object
@property (copy) IllustratorCCTextFrame *nextFrame;  // the linked text frame following this one
@property BOOL opticalAlignment;  // is the optical alignment active?
@property (copy) IllustratorCCTextFrame *previousFrame;  // the linked text frame preceding this one
@property NSInteger rowCount;  // the row count in the text frame (area text only)
@property double rowGutter;  // the row gutter in the text frame (area text only)
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the story
@property double spacing;  // the amount of spacing (path text only)
@property double startTValue;  // the start position of text along a path, as a value relative to the path's segments (path text only)
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text frame
@property IllustratorCCETXo textOrientation;  // the orientation of the text in the frame
@property (copy, readonly) IllustratorCCTextPath *textPath;  // the path for the text frame (area and path text)
@property (copy, readonly) IllustratorCCText *textRange;  // the text range of the text frame

- (IllustratorCCTextFrame *) convertAreaObjectToPointObject;  // Convert Area Type Text Object To Point Type Object
- (IllustratorCCTextFrame *) convertPointObjectToAreaObject;  // Convert Point Type Text Object To Area Type Object
- (IllustratorCCGroupItem *) convertToPaths;  // Convert text item to path items

@end

// A view
@interface IllustratorCCView : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) NSArray *bounds;  // the bounding rectangle of this view
@property (copy) NSArray *centerPoint;  // the center point of this view
@property (copy, readonly) SBObject *container;  // the object's container
@property IllustratorCCESCM screenMode;  // the mode of display
@property double zoom;  // the zoom factor of this view

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Color Suite
 */

// The parent class for all color values used in Illustrator.  See the specific color classes for more information
@interface IllustratorCCColorInfo : SBObject

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A CMYK color specification
@interface IllustratorCCCMYKColorInfo : IllustratorCCColorInfo

@property double cyan;  // the cyan color value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )
@property double magenta;  // the magenta color value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )
@property double yellow;  // the yellow color value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )
@property double black;  // the black color value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )


@end

// A Gradient color specification
@interface IllustratorCCGradientColorInfo : IllustratorCCColorInfo

@property double angle;  // the gradient vector angle ( default: 0.0 )
@property (copy) IllustratorCCGradient *gradient;  // reference to the object defining the gradient
@property double hiliteAngle;  // the gradient hilite vector angle ( default: 0.0 )
@property double hiliteLength;  // the gradient hilite vector length ( default: 0.0 )
@property double length;  // the gradient vector length ( default: 0.0 )
@property (copy) IllustratorCCMatrix *matrix;  // additional transformation arising from manipulating the path
@property (copy) NSArray *origin;  // the gradient vector origin


@end

// A gray color specification
@interface IllustratorCCGrayColorInfo : IllustratorCCColorInfo

@property double grayValue;  // the gray value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )


@end

// An Lab color specification
@interface IllustratorCCLabColorInfo : IllustratorCCColorInfo

@property double l;  // the L color value (between 0.0 and 100.0) ( 0.0 - 100.0; default: 0.0 )
@property double a;  // the a color value (between -128.0 and 127.0) ( -128.0 - 127.0; default: 0.0 )
@property double b;  // the b color value (between -128.0 and 127.0) ( -128.0 - 127.0; default: 0.0 )


@end

// represents the 'none' color
@interface IllustratorCCNoColorInfo : IllustratorCCColorInfo


@end

// A pattern
@interface IllustratorCCPattern : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The pattern's name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A Pattern color specification
@interface IllustratorCCPatternColorInfo : IllustratorCCColorInfo

@property (copy) IllustratorCCMatrix *matrix;  // additional transformation arising from manipulating the path
@property (copy) IllustratorCCPattern *pattern;
@property BOOL reflect;  // whether or not the prototype is reflected before filling ( default: false )
@property double reflectAngle;  // the axis around which to reflect ( default: 0.0 )
@property double rotation;  // the angle to rotate the before filling ( default: 0.0 )
@property (copy) NSArray *scaleFactor;  // the fraction to scale the prototype before filling
@property double shearAngle;  // the angle to slant the shear by ( default: 0.0 )
@property double shearAxis;  // the axis to shear with respect to ( default: 0.0 )
@property double shiftAngle;  // the angle to translate the (unscaled) prototype before filling ( default: 0.0 )
@property double shiftDistance;  // the distance to translate the (unscaled) prototype before filling ( default: 0.0 )


@end

// An RGB color specification
@interface IllustratorCCRGBColorInfo : IllustratorCCColorInfo

@property double red;  // the red color value (between 0.0 and 255.0) ( 0.0 - 255.0; default: 0.0 )
@property double green;  // the green color value (between 0.0 and 255.0) ( 0.0 - 255.0; default: 0.0 )
@property double blue;  // the blue color value (between 0.0 and 255.0) ( 0.0 - 255.0; default: 0.0 )


@end

// A custom color
@interface IllustratorCCSpot : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) IllustratorCCColorInfo *color;
@property IllustratorCCECMd colorType;  // Type of the custom color
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The custom color's name
@property (readonly) IllustratorCCESCk spotKind;  // Kind of the spot color (i.e. RGB, CMYK or LAB), it is the name of color kind contained in spot

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (NSArray *) getInternalColor;  // Gets the internal color of a spot.

@end

// Information about the spot color
@interface IllustratorCCSpotColorInfo : IllustratorCCColorInfo

@property (copy) IllustratorCCSpot *spot;
@property double tint;  // percentage level of tint to be applied to the spot color ( 0.0 - 100.0; default: 100.0 )


@end

// A color swatch
@interface IllustratorCCSwatch : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy) IllustratorCCColorInfo *color;  // the color information of the swatch
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // The swatch's name

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// A Swatch group
@interface IllustratorCCSwatchgroup : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // Name of the swatch group

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) addSpotSpot:(IllustratorCCSpot *)spot;  // Add a spot swatch to the group
- (void) addSwatchSwatch:(IllustratorCCSwatch *)swatch;  // Add a swatch to the group
- (NSArray *) getAllSwatches;  // get all swatches in the swatch group

@end



/*
 * Text Suite
 */

@interface IllustratorCCCharacter : SBObject

- (SBElementArray *) characterStyles;
- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property IllustratorCCEFCO capitalization;  // the case of text
@property NSInteger characterOffset;  // offset of the first character of the range from the beginning of the story, in characters.
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *contents;  // the text string
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property (readonly) NSInteger index;  // the index of this instance of the object
@property BOOL italics;  // does the Japanese OpenType support italics?
@property NSInteger kerning;  // controls the spacing between two characters (in milli-ems)
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property NSInteger length;  // length of text range ( minimum 0 )
@property BOOL ligature;  // whether the ligature should be used
@property BOOL noBreak;  // whether line breaks are allowed
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rotation;  // the character rotation angle (in degrees)
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the text range
@property double size;  // font size in points
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// a named style that remembers character attributes
@interface IllustratorCCCharacterStyle : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property IllustratorCCEFCO capitalization;  // the case of text
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property BOOL italics;  // does the Japanese OpenType support italics?
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property BOOL ligature;  // whether the ligature should be used
@property (copy) NSString *name;  // the character style's name
@property BOOL noBreak;  // whether line breaks are allowed
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rotation;  // the character rotation angle (in degrees)
@property double size;  // font size in points
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) applyCharacterStyleTo:(id)to clearingOverrides:(BOOL)clearingOverrides;  // Apply the character style to text object(s)

@end

// a location between characters, used to insert new text objects
@interface IllustratorCCInsertionPoint : SBObject

- (SBElementArray *) characters;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

@interface IllustratorCCLine : SBObject

- (SBElementArray *) characterStyles;
- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property IllustratorCCEFCO capitalization;  // the case of text
@property NSInteger characterOffset;  // offset of the first character of the range from the beginning of the story, in characters.
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *contents;  // the text string
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property (readonly) NSInteger index;  // the index of this instance of the object
@property BOOL italics;  // does the Japanese OpenType support italics?
@property NSInteger kerning;  // controls the spacing between two characters (in milli-ems)
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property NSInteger length;  // length of text range ( minimum 0 )
@property BOOL ligature;  // whether the ligature should be used
@property BOOL noBreak;  // whether line breaks are allowed
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rotation;  // the character rotation angle (in degrees)
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the text range
@property double size;  // font size in points
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

@interface IllustratorCCParagraph : SBObject

- (SBElementArray *) characterStyles;
- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property BOOL BunriKinshi;  // is BunriKinshi enabled?
@property IllustratorCCEPJ0 BurasagariType;  // the Burasagari type
@property (copy) NSString *Kinsoku;  // the Kinsoku Shori name
@property IllustratorCCEPJ2 KinsokuOrder;  // the preferred Kinsoku order
@property BOOL KurikaeshiMojiShori;  // is KurikaeshiMojiShori enabled?
@property (copy) NSString *Mojikumi;  // the Mojikumi name
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property double autoLeadingAmount;  // auto leading amount (in percentage)
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property IllustratorCCEFCO capitalization;  // the case of text
@property NSInteger characterOffset;  // offset of the first character of the range from the beginning of the story, in characters.
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *contents;  // the text string
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property double desiredGlyphScaling;  // desired glyph scaling expressed as a percentage
@property double desiredLetterSpacing;  // desired letter spacing expressed as a percentage
@property double desiredWordSpacing;  // desired word spacing expressed as a percentage
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property BOOL everyLineComposer;  // whether to enable every line composer (as opposed to single line composer)?
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property double firstLineIndent;  // first line left indent expressed in points
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property BOOL hyphenateCapitalizedWords;  // is hyphenation enabled for the capitalized words?
@property BOOL hyphenation;  // is hyphenation enabled for the paragraph?
@property double hyphenationPreference;  // hyphenation preference scale for better spacing (0) or fewer hyphens (1) ( 0.0 - 1.0 )
@property double hyphenationZone;  // size of the hyphenation zone
@property (readonly) NSInteger index;  // the index of this instance of the object
@property BOOL italics;  // does the Japanese OpenType support italics?
@property IllustratorCCEPRa justification;  // paragraph justification
@property NSInteger kerning;  // controls the spacing between two characters (in milli-ems)
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property IllustratorCCEALD leadingType;  // auto leading type
@property double leftIndent;  // left indent of margin expressed in points
@property NSInteger length;  // length of text range ( minimum 0 )
@property BOOL ligature;  // whether the ligature should be used
@property NSInteger maximumConsecutiveHyphens;  // maximum number of consecutive hypenated lines
@property double maximumGlyphScaling;  // maximum glyph scaling expressed as a percentage
@property double maximumLetterSpacing;  // maximum letter spacing expressed as a percentage
@property double maximumWordSpacing;  // maximum word spacing expressed as a percentage
@property NSInteger minimumAfterHyphen;  // minimum number of characters after a hyphen
@property NSInteger minimumBeforeHyphen;  // minimum number of characters before a hyphen
@property double minimumGlyphScaling;  // minimum glyph scaling expressed as a percentage
@property NSInteger minimumHyphenatedWordSize;  // minimum hyphenated word size
@property double minimumLetterSpacing;  // minimum letter spacing expressed as a percentage
@property double minimumWordSpacing;  // minimum word spacing expressed as a percentage
@property BOOL noBreak;  // whether line breaks are allowed
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rightIndent;  // right indent of margin expressed in points
@property BOOL romanHanging;  // is Roman hanging punctuation enabled?
@property double rotation;  // the character rotation angle (in degrees)
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the text range
@property IllustratorCCEPRa singleWordJustification;  // single word justification
@property double size;  // font size in points
@property double spaceAfter;  // spacing after paragraph in points
@property double spaceBefore;  // spacing before paragraph in points
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property (copy) NSArray *tabStops;  // tab stop settings
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// a named style that remembers paragraph attributes
@interface IllustratorCCParagraphStyle : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property double autoLeadingAmount;  // auto leading amount (in percentage)
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property BOOL BunriKinshi;  // is BunriKinshi enabled?
@property IllustratorCCEPJ0 BurasagariType;  // the Burasagari type
@property IllustratorCCEFCO capitalization;  // the case of text
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property double desiredGlyphScaling;  // desired glyph scaling expressed as a percentage
@property double desiredLetterSpacing;  // desired letter spacing expressed as a percentage
@property double desiredWordSpacing;  // desired word spacing expressed as a percentage
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property BOOL everyLineComposer;  // whether to enable every line composer (as opposed to single line composer)?
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property double firstLineIndent;  // first line left indent expressed in points
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property BOOL hyphenateCapitalizedWords;  // is hyphenation enabled for the capitalized words?
@property BOOL hyphenation;  // is hyphenation enabled for the paragraph?
@property double hyphenationPreference;  // hyphenation preference scale for better spacing (0) or fewer hyphens (1) ( 0.0 - 1.0 )
@property double hyphenationZone;  // size of the hyphenation zone
@property BOOL italics;  // does the Japanese OpenType support italics?
@property IllustratorCCEPRa justification;  // paragraph justification
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property (copy) NSString *Kinsoku;  // the Kinsoku Shori name
@property IllustratorCCEPJ2 KinsokuOrder;  // the preferred Kinsoku order
@property BOOL KurikaeshiMojiShori;  // is KurikaeshiMojiShori enabled?
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property IllustratorCCEALD leadingType;  // auto leading type
@property double leftIndent;  // left indent of margin expressed in points
@property BOOL ligature;  // whether the ligature should be used
@property NSInteger maximumConsecutiveHyphens;  // maximum number of consecutive hypenated lines
@property double maximumGlyphScaling;  // maximum glyph scaling expressed as a percentage
@property double maximumLetterSpacing;  // maximum letter spacing expressed as a percentage
@property double maximumWordSpacing;  // maximum word spacing expressed as a percentage
@property NSInteger minimumAfterHyphen;  // minimum number of characters after a hyphen
@property NSInteger minimumBeforeHyphen;  // minimum number of characters before a hyphen
@property double minimumGlyphScaling;  // minimum glyph scaling expressed as a percentage
@property NSInteger minimumHyphenatedWordSize;  // minimum hyphenated word size
@property double minimumLetterSpacing;  // minimum letter spacing expressed as a percentage
@property double minimumWordSpacing;  // minimum word spacing expressed as a percentage
@property (copy) NSString *Mojikumi;  // the Mojikumi name
@property (copy) NSString *name;  // the paragraph style's name
@property BOOL noBreak;  // whether line breaks are allowed
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rightIndent;  // right indent of margin expressed in points
@property BOOL romanHanging;  // is Roman hanging punctuation enabled?
@property double rotation;  // the character rotation angle (in degrees)
@property IllustratorCCEPRa singleWordJustification;  // single word justification
@property double size;  // font size in points
@property double spaceAfter;  // spacing after paragraph in points
@property double spaceBefore;  // spacing before paragraph in points
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property (copy) NSArray *tabStops;  // tab stop settings
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) applyParagraphStyleTo:(id)to clearingOverrides:(BOOL)clearingOverrides;  // Apply the paragraph style to text object(s)

@end

// a contiguous block of text
@interface IllustratorCCStory : SBObject

- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphs;
- (SBElementArray *) textFrames;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (readonly) NSInteger length;  // the number of characters in the story
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the story
@property (copy, readonly) IllustratorCCText *textRange;  // the text range of the story

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// a range of characters from a text item
@interface IllustratorCCText : SBObject

- (SBElementArray *) characterStyles;
- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property NSInteger characterOffset;  // offset of the first character of the range from the beginning of the story, in characters.
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *contents;  // the text string
@property NSInteger kerning;  // controls the spacing between two characters (in milli-ems)
@property NSInteger length;  // length of text range ( minimum 0 )
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the text range
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (NSString *) translatePlaceholderText;  // translate the placeholder text to regular text. A method to enter unicode points in hex values.
- (void) doScriptFrom:(NSString *)from dialogs:(BOOL)dialogs;  // Play an action from the Actions Palette

@end

// A text path item
@interface IllustratorCCTextPath : SBObject

- (SBElementArray *) pathPoints;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) double area;  // the area of this path in square points
@property IllustratorCCCBlM blendMode;  // the mode used when compositing an object
@property BOOL clipping;  // should this be used as a clipping path?
@property BOOL closed;  // is this path closed?
@property (copy, readonly) SBObject *container;  // the object's container
@property (readonly) BOOL editable;  // can the text path be modified
@property (copy) NSArray *entirePath;  // all the path item's path points
@property BOOL evenodd;  // should the even-odd rule be used to determine insideness?
@property (copy) IllustratorCCColorInfo *fillColor;  // fill color
@property BOOL fillOverprint;  // will art beneath a filled object be overprinted?
@property BOOL filled;  // should the path be filled?
@property BOOL guides;  // is this path a guide object?
@property double height;  // the height of the text path ( 0.0 - 16348.0 )
@property (copy) NSString *note;  // Note assigned to the path
@property double opacity;  // the object's opacity (between 0.0 and 100.0) ( 0.0 - 100.0 )
@property IllustratorCCEPVu polarity;  // the polarity the path
@property (copy) NSArray *position;  // the position of the top left corner of the text path
@property double resolution;  // The resolution of the path
@property (copy, readonly) NSArray *selectedPathPoints;  // all the selected points in the path
@property IllustratorCCESTc strokeCap;  // type of line capping
@property (copy) IllustratorCCColorInfo *strokeColor;  // stroke color
@property double strokeDashOffset;  // the default distance into the dash pattern at which the pattern should be started
@property (copy) NSArray *strokeDashes;  // dash lengths (set to {} for a solid line)
@property IllustratorCCESTj strokeJoin;  // type of joints
@property double strokeMiterLimit;  // whether a join is mitered (pointed) or beveled (squared-off)
@property BOOL strokeOverprint;  // will art beneath a stroked object be overprinted?
@property double strokeWidth;  // width of stroke
@property BOOL stroked;  // should the path be stroked?
@property double width;  // the width of the text path ( 0.0 - 16348.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

@interface IllustratorCCWord : SBObject

- (SBElementArray *) characterStyles;
- (SBElementArray *) characters;
- (SBElementArray *) insertionPoints;
- (SBElementArray *) lines;
- (SBElementArray *) paragraphStyles;
- (SBElementArray *) paragraphs;
- (SBElementArray *) text;
- (SBElementArray *) words;

@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property IllustratorCCCOTP OpenTypePosition;  // the OpenType baseline position
@property NSInteger TCYHorizontal;  // the Tate-Chu-Yoko horizontal adjustment in points
@property NSInteger TCYVertical;  // the Tate-Chu-Yoko vertical adjustment in points
@property double Tsume;  // the percentage of space reduction around a Japanese character (100 = 100%)
@property double akiLeft;  // the em amount of left aki
@property double akiRight;  // the em amount of right aki amount
@property IllustratorCCESRA alignment;  // the character alignment type
@property IllustratorCCEAGF alternateGlyphs;  // the alternate glyphs form
@property BOOL autoLeading;  // whether to use automatic leading
@property IllustratorCCEBSD baselineDirection;  // the Japanese text baseline direction
@property IllustratorCCEFBO baselinePosition;  // the baseline position of text
@property double baselineShift;  // the amount of shift (in points) of the text baseline
@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property IllustratorCCEFCO capitalization;  // the case of text
@property NSInteger characterOffset;  // offset of the first character of the range from the beginning of the story, in characters.
@property BOOL connectionForms;  // whether the OpenType connection forms should be used
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *contents;  // the text string
@property BOOL contextualLigature;  // whether the contextual ligature should be used
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property BOOL discretionaryLigature;  // whether the discretionary ligature should be used
@property IllustratorCCCFST figureStyle;  // which figure style to use in OpenType font
@property (copy) IllustratorCCColorInfo *fillColor;  // the color of the text fill
@property BOOL fractions;  // whether the OpenType fractions should be used
@property double horizontalScale;  // character horizontal scaling factor expressed as a percentage (100 = 100%)
@property (readonly) NSInteger index;  // the index of this instance of the object
@property BOOL italics;  // does the Japanese OpenType support italics?
@property NSInteger kerning;  // controls the spacing between two characters (in milli-ems)
@property IllustratorCCEATK kerningMethod;  // the automatic kerning method to use
@property IllustratorCCELNG language;  // the language of text
@property double leading;  // the amount of space between two lines of text (in points)
@property NSInteger length;  // length of text range ( minimum 0 )
@property BOOL ligature;  // whether the ligature should be used
@property BOOL noBreak;  // whether line breaks are allowed
@property BOOL ordinals;  // whether the OpenType ordinals should be used
@property BOOL ornaments;  // whether the OpenType ornaments should be used
@property BOOL overprintFill;  // whether to overprint the fill of the text
@property BOOL overprintStroke;  // whether to overprint the stroke of the text
@property BOOL proportionalMetrics;  // does the Japanese OpenType support proportional font?
@property double rotation;  // the character rotation angle (in degrees)
@property (copy, readonly) NSArray *selection;  // the selected text (ranges) in the text range
@property double size;  // font size in points
@property (copy, readonly) IllustratorCCStory *story;  // the story of the text range
@property BOOL strikeThrough;  // whether to draw a strike through line over the text
@property (copy) IllustratorCCColorInfo *strokeColor;  // the color of the text stroke
@property double strokeWeight;  // line width of stroke
@property BOOL stylisticAlternates;  // whether the OpenType stylistic alternates should be used
@property BOOL swash;  // whether the OpenType swash should be used
@property (copy) IllustratorCCFont *textFont;  // the text font
@property BOOL titling;  // whether the OpenType titling alternates should be used
@property NSInteger tracking;  // the tracking or range kerning amount in thousands of an em
@property BOOL underline;  // whether to underline the text
@property double verticalScale;  // character vertical scaling factor expressed as a percentage (100 = 100%)
@property NSInteger warichuCharactersAfterBreak;
@property NSInteger warichuCharactersBeforeBreak;
@property BOOL warichuEnabled;  // whether WariChu is enabled
@property NSInteger warichuGap;  // the Wari-Chu line gap
@property IllustratorCCEWCJ warichuJustification;
@property NSInteger warichuLines;  // the number of Wari-Chu (multiple text lines fit into a space meant for one) lines
@property double warichuScale;  // the Wari-Chu scale

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Matrix Suite
 */

@interface IllustratorCCMatrix : SBObject

@property double mvalue_a;
@property double mvalue_b;
@property double mvalue_c;
@property double mvalue_d;
@property double mvalue_tx;
@property double mvalue_ty;

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (IllustratorCCMatrix *) concatenateMatrixWith:(IllustratorCCMatrix *)with;  // Concatenate two transformation matrices
- (IllustratorCCMatrix *) concatenateRotationMatrixAngle:(double)angle;  // Concatenate a rotation matrix to a transformation matrix
- (IllustratorCCMatrix *) concatenateScaleMatrixHorizontalScale:(double)horizontalScale verticalScale:(double)verticalScale;  // Concatenate a scale matrix to a transformation matrix
- (IllustratorCCMatrix *) concatenateTranslationMatrixDeltaX:(double)deltaX deltaY:(double)deltaY;  // Concatenate a translation to a transformation matrix
- (BOOL) equalMatricesWith:(IllustratorCCMatrix *)with;  // Compares two matrices for equality
- (IllustratorCCMatrix *) invertMatrix;  // Invert a matrix
- (BOOL) singularMatrix;  // Tests if a matrix is singular (cannot be inverted)

@end



/*
 * Shape Creation Suite
 */

// Used to create an elliptical path item. Not for path item access.
@interface IllustratorCCEllipse : SBObject

@property (copy) NSArray *bounds;  // the ellipse's bounds
@property BOOL reversed;  // is the ellipse path reversed? ( default: false )
@property BOOL inscribed;  // is the ellipse path inscribed? ( default: true )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Used to create a rectangular path item. Not for path item access.
@interface IllustratorCCRectangle : SBObject

@property (copy) NSArray *bounds;  // the rectangle bounds
@property BOOL reversed;  // is the rectangle path reversed? ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Used to create a rounded-corner rectangular path item. Not for path item access.
@interface IllustratorCCRoundedRectangle : SBObject

@property (copy) NSArray *bounds;  // the rectangle bounds
@property double horizontalRadius;  // horizontal corner radius ( default: 15.0 )
@property double verticalRadius;  // vertical corner radius ( default: 20.0 )
@property BOOL reversed;  // is the rectangle path reversed? ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Used to create a regular polygon path item. Not for path item access.
@interface IllustratorCCPolygon : SBObject

@property (copy) NSArray *centerPoint;  // the center point of the polygon
@property double radius;  // the radius of the polygon points ( default: 50.0 )
@property NSInteger sides;  // the number of sides on the polygon ( default: 8 )
@property BOOL reversed;  // is the polygon path reversed? ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Used to create a star-shaped path item. Not for path item access.
@interface IllustratorCCStar : SBObject

@property (copy) NSArray *centerPoint;  // the center point of the rectangle
@property double radius;  // the outside radius of the star points ( default: 50.0 )
@property double innerRadius;  // the inside radius of the star points ( default: 20.0 )
@property NSInteger pointCount;  // the number of points on the star ( default: 5 )
@property BOOL reversed;  // is the star path reversed? ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Open Options Suite
 */

// Options which may be supplied when opening a AutoCAD file
@interface IllustratorCCAutoCADOptions : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property BOOL centerArtwork;  // to center the created artwork on the artboard (default: true)
@property (copy, readonly) SBObject *container;  // the object's container
@property IllustratorCCEGSO globalScaleOptions;  // how to scale the AutoCAD drawing on import (default: Fit Artboard)
@property double globalScalePercent;  // percentage scaling to apply globally on the AutoCAD drawing (default: 1.0)
@property BOOL mergeLayers;  // to merge the layers of the artwork (default: false)
@property BOOL scaleLineweights;  // to scale lineweights by the same amount as rest of the drawing (default: false)
@property double scaleRatio;  // ratio by which to scale while mapping the units (default: 1.0)
@property IllustratorCCEASU scaleUnit;  // units to which to map (default: Millimeters)
@property (copy) NSString *selectedLayoutName;  // name of layout in the AutoCAD drawing to import

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when opening a file
@interface IllustratorCCOpenOptions : SBObject

@property IllustratorCCELib as;  // open the file as library ( default: Illustrator artwork )
@property BOOL convertCropAreaToArtboard;  // Convert crop area to Artboard when opening legacy document (pre-Illustrator CS4) in CS4 or later. If false then crop areas are discarded. ( default: true )
@property BOOL convertTilesToArtboard;  // Convert print tiles to Artboard when opening legacy document (pre-Illustrator CS4) in CS4 or later. ( default: false )
@property BOOL createArtboardWithArtworkBoundingBox;  // Create Artboard with dimentions of artwork bounding box when opening legacy document (pre-Illustrator CS4) in CS4 or later. ( default: false )
@property BOOL preserveLegacyArtboard;  // Preserve Legacy Artboard (pre-Illustrator CS4) when opening in CS4 or later. ( default: true )
@property BOOL updateLegacyGradientMesh;  // choose to preserve the spot colors in the gradient mesh objects for legacy documents (pre-Illustrator CS3) ( default: true )
@property BOOL updateLegacyText;  // choose to update all text objects for documents saved with legacy texts (pre-Illustrator 11) ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when opening a PDF file
@interface IllustratorCCPDFOptions : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property NSInteger page;  // what page should be used when opening a multipage document (default: 1)
@property IllustratorCCEPBX PDFCropBounds;  // what box should be used when placing a multipage document (default: PDF media box)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which are applied when opening or placing a Photoshop file
@interface IllustratorCCPhotoshopOptions : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *layerComp;  // Should use the specified LayerComp
@property BOOL preserveHiddenLayers;  // should hidden layers be preserved when the document is converted (default: false)
@property BOOL preserveImageMaps;  // should image maps be preserved when the document is converted (default: true)
@property BOOL preserveLayers;  // should layers be Preserve when the document is converted (default: true)
@property BOOL preserveSlices;  // should slices be preserved when the document is converted (default: true)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Save Options Suite
 */

// Options which may be supplied when saving a document as an Illustrator EPS file
@interface IllustratorCCEPSSaveOptions : SBObject

@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property BOOL CMYKPostScript;  // use CMYK PostScript ( default: true )
@property IllustratorCCEDCc compatibility;  // what Illustrator file format version to create ( default: Illustrator 17 )
@property BOOL compatibleGradientPrinting;  // create a raster item of the gradient or gradient mesh so that PostScript Level 2 printers can print the object ( default: false )
@property BOOL embedAllFonts;  // embed all fonts used by the document in the saved file (version 7 or later) ( default: false )
@property BOOL embedLinkedFiles;  // are linked image files to be included in the saved document ( default: false )
@property IllustratorCCEOFl flattenOutput;  // how should transparency be flattened for older file format versions (pre-version 9) ( default: preserve appearance )
@property BOOL includeDocumentThumbnails;  // include thumbnail image of the EPS artwork ( default: true )
@property IllustratorCCCPoP overprint;  // ( default: preserve )
@property IllustratorCCEPSt PostScript;  // PostScript level to use (level 1 valid for file format version 8 or older) ( default: level 2 )
@property IllustratorCCEEPV preview;  // EPS preview format
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be saved ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when saving a document as an FXG file
@interface IllustratorCCFXGSaveOptions : SBObject

@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property IllustratorCCEFBp blendsPolicy;  // the policy used by FXG to expand blends ( default: autoConvert blends )
@property BOOL downsampleLinkedImages;  // choose to downsample the linked images(72ppi) ( default: false )
@property IllustratorCCEFFp filtersPolicy;  // the policy used by FXG to preserve filters ( default: keep filters editable )
@property IllustratorCCEFxV fxgVersion;  // the version of the FXG file format to create ( default: version 2.0 )
@property IllustratorCCEFGp gradientsPolicy;  // the policy used by FXG to preserve gradients ( default: autoConvert gradients )
@property BOOL includeMetadata;  // choose to include metadata (XMP) ( default: false )
@property BOOL includeUnusedSymbols;  // choose to include unused symbols ( default: false )
@property BOOL preserveEditingCapabilities;  // choose to preserve the editing capabilities of FXG ( default: true )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be saved ( default: false )
@property IllustratorCCEFTp textPolicy;  // the policy used by FXG to preserve text ( default: autoConvert text )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when saving a document as an Illustrator file
@interface IllustratorCCIllustratorSaveOptions : SBObject

@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true ,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property IllustratorCCEDCc compatibility;  // what Illustrator file format version to create ( default: Illustrator 17 )
@property BOOL compressed;  // should the saved file be compressed (version 10 or later) ( default: true )
@property BOOL embedICCProfile;  // embed the document's ICC profile in the saved file (version 9 or later) ( default: false )
@property BOOL embedLinkedFiles;  // are linked image files to be included in the saved document (versions 7 or later) ( default: false )
@property IllustratorCCEOFl flattenOutput;  // how should transparency be flattened for older file format versions (pre-version 9) ( default: preserve appearance )
@property double fontSubsetThreshold;  // include a subset of fonts when less than this percentage of characters are used (version 9 or later) ( 0.0 - 100.0; default: 100.0 )
@property BOOL PDFCompatible;  // save as a PDF compatible file (version 10 or later) ( default: true )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be saved ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when saving a document as a PDF file
@interface IllustratorCCPDFSaveOptions : SBObject

@property BOOL acrobatLayers;  // create acrobat layers from top-level layers - acrobat 6 only option ( default: false )
@property IllustratorCCCPpA allowPrinting;  // PDF security printing permission ( default: pdf 128 print high res )
@property (copy) NSString *artboardRange;  // Considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property BOOL bleedLink;  // link 4 bleed values ( default: true )
@property (copy) NSArray *bleedOffset;  // the bleed offset rect
@property IllustratorCCCPcA changesAllowed;  // PDF security changes allowed ( default: pdf 128 any changes )
@property BOOL colorBars;  // draw color bars ( default: false )
@property IllustratorCCCCcT colorCompression;  // how should color bitmap images be compressed ( default: none )
@property IllustratorCCEPcC colorConversionId;  // PDF color conversion policy. Three choices are available: (1)No Color Conversion (2) Repurpose (3) Convert to Destination ( default: none )
@property IllustratorCCEDcD colorDestinationId;  // When NoColorConversion is specified for Color Conversion, NoColorDestination is set ( default: none )
@property double colorDownsampling;  // if zero, no downsampling, otherwise, the resolution to downsample color bitmap images to ( default: 150.0 )
@property double colorDownsamplingThreshold;  // downsample if the image's resolution is above this value ( default: 225.0 )
@property IllustratorCCEDpC colorProfileId;  // If CMS is off, Don't Include Profiles is set ( default: none )
@property IllustratorCCCRsT colorResample;  // how should color bitmap images be resampled ( default: nodownsample )
@property NSInteger colorTileSize;  // tile size when compressing with JPEG2000 ( default: 256 )
@property IllustratorCCEPDc compatibility;  // the version of the Acrobat file format to create ( default: Acrobat 5 )
@property BOOL compressArt;  // should line art and text be compressed? ( default: true )
@property (copy) NSString *documentPassword;  // a password string to open the document ( default:  )
@property BOOL enableAccess;  // enable accessing 128-bit ( default: true )
@property BOOL enableCopy;  // enable copying of text 128-bit ( default: true )
@property BOOL enableCopyAndAccess;  // enable copying and accessing 40-bit ( default: true )
@property BOOL enablePlaintext;  // enable plaintext metadata 128-bit - available only for acrobat 6 ( default: false )
@property (copy) NSString *flattenerPreset;  // the transparency flattener preset name
@property (copy) IllustratorCCFlatteningOptions *flattenerSettings;  // the printing flattener options
@property double fontSubsetThreshold;  // include a subset of fonts when less than this percentage of characters are used ( 0.0 - 100.0; default: 100.0 )
@property BOOL generateThumbnails;  // generate thumbnails for the saved document ( default: true )
@property IllustratorCCCCcT grayscaleCompression;  // how should grayscale bitmap images be compressed ( default: none )
@property double grayscaleDownsampling;  // if zero, no downsampling, otherwise, the resolution to downsample grayscale images to ( default: 150.0 )
@property double grayscaleDownsamplingThreshold;  // downsample if the image's resolution is above this value ( default: 225.0 )
@property IllustratorCCCRsT grayscaleResample;  // how should grayscale bitmap images be resampled ( default: nodownsample )
@property NSInteger grayscaleTileSize;  // tile size when compressing with JPEG2000 ( default: 256 )
@property IllustratorCCCMcQ monochromeCompression;  // how should monochrome bitmap images be compressed ( default: none )
@property double monochromeDownsampling;  // If zero, no downsampling, otherwise, the resolution to downsample images to ( default: 300.0 )
@property double monochromeDownsamplingThreshold;  // downsample if the image's resolution is above this value ( default: 450.0 )
@property IllustratorCCCRsT monochromeResample;  // how should monochrome bitmap images be resampled ( default: nodownsample )
@property double offset;  // custom offset (in points) for using the custom paper ( default: 0.0 )
@property BOOL optimization;  // should the PDF document be optimized for fast web viewing ( default: false )
@property (copy) NSString *outputCondition;  // This is an optional comment which, if present, is added to the PDF file and describes the intended printing condition ( default:  )
@property (copy) NSString *outputConditionId;  // If selected for Output Intent Profile Name, you can set the name of a registered printing condition ( default:  )
@property (copy) NSString *outputIntentProfile;  // When CMS is on, the output intent profile is the same profile selected for Destination in the Color group box ( default:  )
@property BOOL pageInfo;  // draw page information ( default: false )
@property IllustratorCCEPMS pageMarksStyle;  // the page marks style ( default: Roman )
@property (copy) NSString *PDFPreset;  // The max string length is 255 bytes. Name of PDF preset to use.
@property IllustratorCCEPdX pdfXstandard;  // This control includes the None option for when the user is not complying with any PDF standard ( default: PDFX None )
@property (copy) NSString *pdfXstandardDescripton;  // This displays the description from the selected preset
@property (copy) NSString *permissionPassword;  // a password string to restrict editing security settings ( default:  )
@property BOOL preserveEditability;  // preserve Illustrator editing capabilities when saving the document ( default: true )
@property double printerResolution;  // flattening printer resolution ( default: 800.0 )
@property BOOL registrationMarks;  // draw registration marks ( default: false )
@property (copy) NSString *registryName;  // URL to the site where the specified output condition is registered. No validation is performed on the URL ( default:  )
@property BOOL requireDocPassword;  // require a password to open the document ( default: false )
@property BOOL requirePermPassword;  // use a password to restrict editing security settings ( default: false )
@property BOOL trapped;  // This indicates if manual trapping has been prepared in the document ( default: false )
@property IllustratorCCCPtW trimMarkWeight;  // trim mark weight ( default: trimmarkweight0125 )
@property BOOL trimMarks;  // draw trim marks ( default: false )
@property BOOL viewPdf;  // view PDF after saving ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Export Options Suite
 */

// Options which may be supplied when exporting a document to AutoCAD formats (.dwg or .dxf)
@interface IllustratorCCAutoCADExportOptions : SBObject

@property BOOL alterPathsForAppearance;  // alter paths for appearance ( default: false )
@property IllustratorCCEAVS AutoCADVersion;  // release of AutoCAD to export to ( default: AutoCAD release 24 )
@property IllustratorCCEACL colors;  // number of colors to export into the AutoCAD file ( default: true colors )
@property BOOL convertTextToOutlines;  // whether to convert text to outlines ( default: false )
@property IllustratorCCEAFF exportFileFormat;  // which format to export the file as ( default: dwg )
@property IllustratorCCEExO exportOption;  // whether to preserve appearance or editability during export ( default: maximize editability )
@property BOOL exportSelectedArtOnly;  // export selected art only ( default: false )
@property IllustratorCCEARF rasterFormat;  // raster format in which to export raster art ( default: PNG raster )
@property BOOL scaleLineweights;  // whether to scale lineweights by the same amount as rest of the drawing ( default: false )
@property double scaleRatio;  // ratio by which to scale the output ( default: 1.0 )
@property IllustratorCCEASU scaleUnit;  // units from which to map ( default: autocad millimeters )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as an Flash (.SWF) file
@interface IllustratorCCFlashExportOptions : SBObject

@property IllustratorCCEFOS artClipping;  // how should the arts be clipped during the output ( default: output art bounds )
@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property (copy) IllustratorCCRGBColorInfo *backgroundColor;  // the background color
@property (copy) NSArray *backgroundLayers;  // a list of layers to be included as the static background in all exported Flash frames
@property IllustratorCCEFBA blendAnimation;  // controls how the blend art objects are animated when export to Flash frames ( default: none )
@property BOOL compressed;  // should the exported file be compressed ( default: false )
@property BOOL convertTextToOutlines;  // should all text be converted to outlines ( default: false )
@property NSInteger curveQuality;  // how much curve information should be preserved ( 0 - 10; default: 7 )
@property BOOL exportAllSymbols;  // should all symbol definitions in the palette be exported to the SWF File ( default: false )
@property IllustratorCCEFXS exportStyle;  // how should the Flash file be created ( default: Flash file )
@property IllustratorCCEFXV exportVersion;  // which version of SWF to export ( default: SWF version 9 )
@property IllustratorCCEFPS FlashPlaybackSecurity;  // what access should the SWF file have - local or network access ( default: flash playback local access )
@property double frameRate;  // when exporting layers to Flash frames ( 0.01 - 120.0; default: 12.0 )
@property IllustratorCCEFCS imageFormat;  // how should the images in the exported Flash file be compressed ( default: lossless )
@property BOOL includeMetadata;  // If true, include minimal XMP metadata in the exported file ( default: false )
@property IllustratorCCEFJM JPEGMethod;  // what method to use ( default: standard )
@property NSInteger JPEGQuality;  // level of compression ( 0 - 10; default: 3 )
@property IllustratorCCEFOT layerOrder;  // the order in which the layers will be exported to Flash frames ( default: bottom up )
@property BOOL looping;  // should the Flash file be set to loop when run ( default: false )
@property BOOL preserveAppearance;  // choose whether to preserve artwork appearance or editability (default) during export ( default: false )
@property BOOL readOnly;  // prevent the exported file from being imported by other applications ( default: false )
@property IllustratorCCSavo replacing;  // if a file with the same name already exists, should it be replaced? ( default: ask )
@property double resolution;  // pixels per inch ( 72.0 - 2400.0; default: 72.0 )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be exported ( default: false )
@property BOOL textkerning;  // should the kerning information for text objects be ignored ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as a GIF file
@interface IllustratorCCGIFExportOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: true )
@property BOOL artboardClipping;  // should the resulting image be clipped to the artboard ( default: false )
@property NSInteger colorCount;  // number of colors in exported color table ( 2 - 256; default: 128 )
@property IllustratorCCCDtM colorDither;  // method used to dither colors ( default: diffusion )
@property IllustratorCCCCRM colorReduction;  // method used to reduce the number of colors ( default: selective )
@property NSInteger ditherPercent;  // how much should the colors be dithered ( 0 - 100; default: 88 )
@property double horizontalScaling;  // horizontal scaling factor ( default: 100.0 )
@property NSInteger informationLoss;  // level of information loss during compression ( 0 - 100; default: 0 )
@property BOOL interlaced;  // should the resulting image be interlaced ( default: false )
@property BOOL matte;  // should the artboard be matted with a color ( default: true )
@property (copy) IllustratorCCRGBColorInfo *matteColor;  // the color to use when matting the artboard (default: white)
@property BOOL savingAsHTML;  // should the resulting image be saved as HTML ( default: false )
@property BOOL transparency;  // should the resulting image use transparency ( default: true )
@property double verticalScaling;  // vertical scaling factor ( default: 100.0 )
@property NSInteger webSnap;  // how much should the color table be changed to match the web pallet ( 0 - 100; default: 0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when capturing a portion of the artwork as an 24 bit PNG file
@interface IllustratorCCImageCaptureOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: false )
@property BOOL matte;  // should the artboard be matted with a color ( default: false )
@property (copy) IllustratorCCRGBColorInfo *matteColor;  // the color to use when matting the artboard (default: white)
@property double resolution;  // The resolution of the captured image file ( 72.0 - 2400.0; default: 150.0 )
@property BOOL transparency;  // should the resulting image use transparency ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as a JPEG file
@interface IllustratorCCJPEGExportOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: true )
@property BOOL artboardClipping;  // should the resulting image be clipped to the artboard ( default: false )
@property double blur;  // blur the resulting image this much ( 0.0 - 2.0; default: 0.0 )
@property double horizontalScaling;  // horizontal scaling factor ( 0.0 - 776.19; default: 100.0 )
@property BOOL matte;  // should the artboard be matted with a color ( default: true )
@property (copy) IllustratorCCRGBColorInfo *matteColor;  // the color to use when matting the artboard (default: white)
@property BOOL optimization;  // should the image be optimized for web viewing ( default: true )
@property NSInteger quality;  // quality of resulting image ( 0 - 100; default: 30 )
@property BOOL savingAsHTML;  // should the resulting image be saved as HTML ( default: false )
@property double verticalScaling;  // vertical scaling factor ( 0.0 - 776.19; default: 100.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as a Photoshop file
@interface IllustratorCCPhotoshopExportOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: true )
@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property IllustratorCCECLS colorSpace;  // the color space of the exported file ( default: RGB )
@property BOOL editableText;  // export text objects as editable text layers ( default: true )
@property BOOL embedICCProfile;  // embed an ICC profile when exporting ( default: false )
@property BOOL maximumEditability;  // preserve as much of the original document's structure as possible when exporting ( default: true )
@property double resolution;  // The resolution of the exported file ( 72.0 - 2400.0; default: 150.0 )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be exported ( default: false )
@property BOOL warnings;  // should a warning dialog be displayed because of conflicts in the export settings ( default: true )
@property BOOL writeLayers;  // preserve document layers when exporting ( default: true )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as an 24 bit PNG file
@interface IllustratorCCPNG24ExportOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: true )
@property BOOL artboardClipping;  // should the resulting image be clipped to the artboard ( default: false )
@property double horizontalScaling;  // horizontal scaling factor ( default: 100.0 )
@property BOOL matte;  // should the artboard be matted with a color ( default: true )
@property (copy) IllustratorCCRGBColorInfo *matteColor;  // the color to use when matting the artboard (default: white)
@property BOOL savingAsHTML;  // should the resulting image be saved as HTML ( default: false )
@property BOOL transparency;  // should the resulting image use transparency ( default: true )
@property double verticalScaling;  // vertical scaling factor ( default: 100.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as an 8 bit PNG file
@interface IllustratorCCPNG8ExportOptions : SBObject

@property BOOL antialiasing;  // should the resulting image be antialiased ( default: true )
@property BOOL artboardClipping;  // should the resulting image be clipped to the artboard ( default: false )
@property NSInteger colorCount;  // number of colors in exported color table ( 2 - 256; default: 128 )
@property IllustratorCCCDtM colorDither;  // method used to dither colors ( default: diffusion )
@property IllustratorCCCCRM colorReduction;  // method used to reduce the number of colors ( default: selective )
@property NSInteger ditherPercent;  // how much should the colors be dithered ( 0 - 100; default: 88 )
@property double horizontalScaling;  // horizontal scaling factor ( default: 100.0 )
@property BOOL interlaced;  // should the resulting image be interlaced ( default: false )
@property BOOL matte;  // should the artboard be matted with a color ( default: true )
@property (copy) IllustratorCCRGBColorInfo *matteColor;  // the color to use when matting the artboard (default: white)
@property BOOL savingAsHTML;  // should the resulting image be saved as HTML ( default: false )
@property BOOL transparency;  // should the resulting image use transparency ( default: true )
@property double verticalScaling;  // vertical scaling factor ( default: 100.0 )
@property NSInteger webSnap;  // how much should the color table be changed to match the web palette ( 0 - 100; default: 0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as an SVG file
@interface IllustratorCCSVGExportOptions : SBObject

@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property BOOL compressed;  // should the exported file be compressed ( default: false )
@property NSInteger coordinatePrecision;  // decimal precision for element coordinate values ( 1 - 7; default: 3 )
@property IllustratorCCESCS CSSProperties;  // how should the CSS properties of the document be included in the document ( default: style attributes )
@property IllustratorCCESDE documentEncoding;  // how should the text in the document be encoded ( default: ASCII )
@property IllustratorCCEDTD DTD;  // the version of DTD that the exported file should be conforming to ( default: SVG 1.1 )
@property BOOL embedRasterImages;  // should the raster images in the exported file be included ( default: false )
@property BOOL enableAutoKerning;  // is SVG auto kerning allowed? ( default: false )
@property BOOL enableTextOnPath;  // is SVG text-on-path construct allowed? ( default: false )
@property IllustratorCCESFS fontSubsetting;  // what font glyphs should be included in the exported file ( default: all glyphs )
@property IllustratorCCESFT fontType;  // the type of font that should be included in the exported file ( default: CEF font )
@property BOOL includeFileInfo;  // ( default: false )
@property BOOL includeUnusedStyles;  // ( default: false )
@property BOOL includeVariablesAndDatasets;  // ( default: false )
@property BOOL optimizeForSVGViewer;  // ( default: false )
@property BOOL preserveEditability;  // preserve Illustrator editing capabilities when exporting the document ( default: false )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be saved ( default: false )
@property BOOL slices;  // preserve slice data in exported document ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Options which may be supplied when exporting a document as a TIFF file
@interface IllustratorCCTIFFExportOptions : SBObject

@property IllustratorCCEALS antialiasing;  // should the resulting image be antialiased ( default: art optimized )
@property (copy) NSString *artboardRange;  // If SaveMultipleArtboards is true,this will be considered for multi-asset extraction which specifies artboard range.Empty string will extracts all the artboards.Default is empty string ( default:  )
@property IllustratorCCETbo ByteOrder;  // Mac or PC byte order when exporting ( default: IBM PC )
@property IllustratorCCECLS colorSpace;  // the color space of the exported file ( default: RGB )
@property BOOL embedICCProfile;  // embed an ICC profile when exporting ( default: false )
@property BOOL LZWCompression;  // compress TIFF file with LZW Compression when exporting ( default: false )
@property double resolution;  // The resolution of the exported file ( 72.0 - 2400.0; default: 150.0 )
@property BOOL saveMultipleArtboards;  // All the artboards or range of the artboards will be exported ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Dynamic Publishing Suite
 */

// A set of variables and their associated dynamic data which will be used for dynamic publishing
@interface IllustratorCCDataset : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy) NSString *name;  // the name of this dataset

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (void) display;  // displays the dynamic data that has been captured in the dataset.
- (void) update;  // re-apply the dynamic data of the active dataset to the artboard

@end

// Dynamic object used to create data-driven graphics.
@interface IllustratorCCVariable : SBObject

- (SBElementArray *) pageItems;

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (readonly) NSInteger index;  // the index of this instance of the object
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (copy, readonly) SBObject *container;  // the object's container
@property IllustratorCCEVKd kind;  // the variable's type
@property (copy) NSString *name;  // the name of this variable

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Print Suite
 */

// the color management options
@interface IllustratorCCColorManagementOptions : SBObject

@property IllustratorCCEPCI intent;  // the color management intent type ( default: relative colorimetric )
@property (copy) NSString *name;  // the color management profile name
@property IllustratorCCEPCP profileKind;  // the color management profile mode ( default: source profile )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Print color separation options
@interface IllustratorCCColorSeparationOptions : SBObject

@property BOOL convertSpotColors;  // whether to convert all spot colors to process colors ( default: false )
@property (copy) NSArray *inks;  // the list of inks for color separation
@property BOOL overPrintBlack;  // whether to overprint in black ( default: false )
@property IllustratorCCEPCS separationMode;  // the color separation type ( default: composite )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the print coordinate options
@interface IllustratorCCCoordinateOptions : SBObject

@property BOOL emulsion;  // whether to flip artwork horizontally ( default: false )
@property BOOL fitToPage;  // whether to proportionally scale the artwork to fit on the page ( default: false )
@property double horizontalScale;  // the horizontal scaling factor expressed as a percentage (100 = 100%) ( 1.0 - 10000.0; default: 100.0 )
@property IllustratorCCEPOR orientation;  // the artwork orientation ( default: portrait )
@property IllustratorCCEPPO position;  // the artwork position on media ( default: center )
@property IllustratorCCEPTL tiling;  // the page tiling mode ( default: single full page )
@property double verticalScale;  // the vertical scaling factor expressed as a percentage (100 = 100%) ( 1.0 - 10000.0; default: 100.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the transparency flattening options
@interface IllustratorCCFlatteningOptions : SBObject

@property BOOL clipComplexRegions;  // whether to clip complex regions ( default: false )
@property BOOL convertStrokesToOutlines;  // whether to convert all strokes to outlines ( default: false )
@property BOOL convertTextToOutlines;  // whether to convert all text to outlines ( default: false )
@property NSInteger flatteningBalance;  // the flattening balance ( 0 - 100; default: 100 )
@property double gradientResolution;  // the gradient resolution ( 1.0 - 9600.0; default: 300.0 )
@property IllustratorCCCPoP overprint;  // overprint ( default: preserve )
@property double rasterizationResolution;  // the rasterization resolution ( 1.0 - 9600.0; default: 300.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the font options for printing
@interface IllustratorCCFontOptions : SBObject

@property IllustratorCCEPFD downloadFonts;  // the font download mode ( default: subset )
@property IllustratorCCEPFS fontSubstitutionKind;  // the font substitution policy ( default: oblique substitution )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// printer's ink
@interface IllustratorCCInk : SBObject

@property (copy) NSString *name;  // the ink's name
@property (copy) IllustratorCCInkProperties *properties;  // the ink information

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Ink information
@interface IllustratorCCInkProperties : SBObject

@property double angle;  // the ink's screen angle (in degrees)
@property (copy) IllustratorCCColorInfo *customColor;  // the color of the custom ink
@property double density;  // the neutral density ( minimum 0.0 )
@property (copy) NSString *dotShape;  // the dot shape name
@property double frequency;  // the ink's frequency ( minimum 0.0 )
@property IllustratorCCEPIK kind;  // the ink type
@property IllustratorCCEPST printingStatus;  // the ink printing status
@property IllustratorCCEPTT trapping;  // the trapping type
@property NSInteger trappingOrder;  // the order of trapping for the ink ( minimum 1 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the print job options
@interface IllustratorCCJobOptions : SBObject

@property (copy) NSString *artboardRange;  // Artboard Range to be printed if PrintAllArtboards is false ( default: 1- )
@property double bitmapResolution;  // the bitmap resolution ( minimum 0.0; default: 0.0 )
@property BOOL collate;  // whether to collate print pages ( default: false )
@property NSInteger copies;  // the number of copies to print ( minimum 1; default: 1 )
@property IllustratorCCEPAD designation;  // the layers/objects to be printed ( default: visible printable layers )
@property (copy) NSURL *filePath;  // the file to be printed to
@property (copy) NSString *name;  // the print job name
@property BOOL printAllArtboards;  // whether to print all artboards ( default: true )
@property IllustratorCCEPBD printArea;  // the printing bounds ( default: artboard bounds )
@property BOOL printAsBitmap;  // whether to print as bitmap ( default: false )
@property BOOL reversePages;  // print pages in reverse order ( default: false )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the page marks options
@interface IllustratorCCPageMarksOptions : SBObject

@property (copy) NSArray *bleedOffset;  // the bleed offset rect
@property BOOL colorBars;  // whether to enable color bars printing ( default: false )
@property (copy) NSArray *marksOffset;  // the page marks offset rect
@property BOOL pageInfoMarks;  // whether to enable page info marks printing ( default: false )
@property IllustratorCCEPMS pageMarksStyle;  // the page marks style ( default: Roman )
@property BOOL registrationMarks;  // whether to enable registration marks printing ( default: false )
@property BOOL trimMarks;  // whether to enable trim marks printing ( default: false )
@property double trimMarksWeight;  // stroke weight of trim marks ( minimum 0.0; default: 0.125 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// paper size
@interface IllustratorCCPaper : SBObject

@property (copy) NSString *name;  // the paper name
@property (copy) IllustratorCCPaperProperties *properties;  // the paper information

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the paper options
@interface IllustratorCCPaperOptions : SBObject

@property double height;  // the custom height (in points) for using the custom paper ( default: 0.0 )
@property (copy) NSString *name;  // the paper's name
@property double offset;  // custom offset (in points) for using the custom paper ( default: 0.0 )
@property BOOL transverse;  // whether to transverse the artwork (rotate 90 degrees) on the custom paper ( default: false )
@property double width;  // the custom width (in points) for using the custom paper ( default: 0.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Paper information
@interface IllustratorCCPaperProperties : SBObject

@property BOOL customPaper;  // Is it a custom paper?
@property double height;  // the paper's height (in points)
@property (copy) NSArray *imageableArea;  // the imageable area
@property double width;  // the paper's width (in points)

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the PostScript options
@interface IllustratorCCPostscriptOptions : SBObject

@property BOOL binaryPrinting;  // whether to print in binary mode ( default: false )
@property BOOL compatibleShading;  // use PostScript level 1 compatible gradient and gradient mesh printing ( default: false )
@property BOOL forceContinuousTone;  // whether to force continuous tone ( default: false )
@property IllustratorCCEPIC imageCompression;  // the image compression type ( default: none )
@property BOOL negativePrinting;  // whether to print in negative mode ( default: false )
@property IllustratorCCEPPS PostScript;  // the PostScript language level ( default: level 2 )
@property double shadingResolution;  // the shading resolution ( 1.0 - 9600.0; default: 300.0 )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// a PPD file
@interface IllustratorCCPPDFile : SBObject

@property (copy) NSString *name;  // the PPD model name
@property (copy) IllustratorCCPPDProperties *properties;  // the PPD file information

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// PPD file information
@interface IllustratorCCPPDProperties : SBObject

@property (copy) NSURL *filePath;  // path specification for the PPD file
@property (copy) NSString *languageLevel;  // the PostScript language level
@property (copy) NSArray *screens;  // list of color separation screens
@property (copy) NSArray *spotFunctions;  // list of color separation screen spot functions

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// the print options
@interface IllustratorCCPrintOptions : SBObject

@property (copy) IllustratorCCColorManagementOptions *colorManagementSettings;  // the printing color management options
@property (copy) IllustratorCCColorSeparationOptions *colorSeparationSettings;  // the printing color separation options
@property (copy) IllustratorCCCoordinateOptions *coordinateSettings;  // the printing coordinate options
@property (copy) NSString *flattenerPreset;  // the transparency flattener preset name
@property (copy) IllustratorCCFlatteningOptions *flattenerSettings;  // the printing flattener options
@property (copy) IllustratorCCFontOptions *fontSettings;  // the printing font options
@property (copy) IllustratorCCJobOptions *jobSettings;  // the printing job options
@property (copy) IllustratorCCPageMarksOptions *pageMarksSettings;  // the printing page marks options
@property (copy) IllustratorCCPaperOptions *paperSettings;  // the paper options
@property (copy) IllustratorCCPostscriptOptions *postscriptSettings;  // the printing PostScript options
@property (copy) NSString *PPDName;  // the name of the PPD to use
@property (copy) NSString *printPreset;  // the name of a print preset to use
@property (copy) NSString *printerName;  // the name of the printer to print to

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// an installed printer
@interface IllustratorCCPrinter : SBObject

@property (copy) NSString *name;  // the printer name
@property (copy) IllustratorCCPrinterProperties *properties;  // the printer information

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// printer information
@interface IllustratorCCPrinterProperties : SBObject

@property BOOL binaryPrinting;  // does the printer support binary printing?
@property IllustratorCCEPCM colorSupport;  // the printer color capability
@property BOOL customPaperSizes;  // does the printer support custom paper size?
@property BOOL customPaperTransverse;  // does the printer support custom paper transverse?
@property double defaultResolution;  // the printer default resolution
@property BOOL InRIPSeparationSupport;  // does the printer support InRIP color separation?
@property double maximumHeightOffset;  // custom paper's maximum height offset
@property double maximumPaperHeight;  // custom paper's maximum height
@property double maximumPaperWidth;  // custom paper's maximum width
@property double maximumResolution;  // the printer maximum device resolution
@property double maximumWidthOffset;  // custom paper's maximum width offset
@property double minimumHeightOffset;  // custom paper's minimum height offset
@property double minimumPaperHeight;  // custom paper's minimum height
@property double minimumPaperWidth;  // custom paper's minimum width
@property double minimumWidthOffset;  // custom paper's minimum width offset
@property (copy) NSArray *paperSizes;  // the list of supported paper sizes
@property IllustratorCCEPPS PostScript;  // the PostScript level
@property IllustratorCCEPTY printerType;  // the printer type

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// Screen information
@interface IllustratorCCScreenProperties : SBObject

@property double angle;  // the screen's angle (in degrees)
@property BOOL defaultScreen;  // Is it the default screen?
@property double frequency;  // the screen's frequency

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// color separation screen spot function
@interface IllustratorCCScreenSpotFunction : SBObject

@property (copy) NSString *name;  // the color separation screen spot function name
@property (copy) NSString *spotFunction;  // the spot function in terms of the PostScript commands

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

// color separation screen
@interface IllustratorCCSeparationScreen : SBObject

@property (copy) NSString *name;  // the color separation screen name
@property (copy) IllustratorCCScreenProperties *properties;  // the color separation screen information

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end



/*
 * Tracing Suite
 */

// A tracing object.
@interface IllustratorCCTracingobject : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property (readonly) NSInteger anchorCount;  // The number of anchors in the tracing result.
@property (copy, readonly) SBObject *container;  // the object's container
@property (copy, readonly) IllustratorCCPageItem *originalArt;  // The source art used when creating a new tracing object.
@property (readonly) NSInteger pathCount;  // The number of paths in the tracing result.
@property (copy, readonly) IllustratorCCTracingoptions *tracingOptions;  // The options used when tracing the artwork.
@property (readonly) NSInteger usedColorCount;  // The number of colors used in the tracing result.

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (IllustratorCCGroupItem *) expandTracingViewed:(BOOL)viewed;  // Expand the tracing to paths.  Deletes this tracing object.
- (IllustratorCCPageItem *) releaseTracing;  // Release the source artwork for the tracing object.  Deletes this tracing object.

@end

// Tracing options that guide the tracing process.
@interface IllustratorCCTracingoptions : SBObject

@property (copy, readonly) NSNumber *bestType;  // the best type for the object's value
@property (copy, readonly) NSNumber *defaultType;  // the default type for the object's value
@property (copy) NSDictionary *properties;  // all of this object's properties returned in a single record
@property double colorFidelity;  // ColorFidelity when TracingColorTypeValue is TracingFullColor.
@property (copy) NSString *colorgroup;  // The color group name used for tracing. Use 'All' or any color group name available in color Palette (library).
@property (copy, readonly) SBObject *container;  // the object's container
@property double CornerFidelity;  // Corner fidelity for tracing.
@property BOOL fills;  // Tracing with fills. Fills, Strokes or both must be on.
@property NSInteger grayLevels;  // The gray levels for a grayscale mode tracing.. ( 1 - 256 )
@property BOOL ignoreWhite;  // Controls whether to ignore white fill color. Works only if TracingMethod is TracingMethodAbutting and mode is Black and white.
@property NSInteger maximumColors;  // Maximum number of colors allowed for tracing when TracingColorTypeValue is TracingLimitedColor.
@property double maximumStrokeWeight;  // Maximum stroke weight (stroke only).
@property double NoiseFidelity;  // Specifies minimum area of pixels to be vectorized.
@property (copy) NSString *palette;  // The color palette (Library) name used for tracing. Use 'Document Library' or any other imported library name.
@property double PathFidelity;  // Path fidelity for tracing.
@property (copy, readonly) NSString *preset;  // The name of the preset in use.  Read-only.
@property BOOL snapCurveToLines;  // Controls whether to snap curve to lines.
@property BOOL strokes;  // Tracing with strokes.  Fills, Strokes or both must be on.
@property NSInteger threshold;  // The threshold value for a black and white mode tracing. ( 1 - 256 )
@property IllustratorCCETCt TracingColorTypeValue;  // Color Type used for tracing, TracingLimitedColor or TracingFullColor .
@property IllustratorCCETet TracingMethod;  // Method for tracing, either abutting or adjoining paths.
@property IllustratorCCETMt tracingMode;  // The tracing mode: color, gray, black and white.
@property IllustratorCCETvv viewMode;  // The visualization mode.

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location
- (BOOL) loadPresetPresetname:(NSString *)presetname;  // Load options from preset.
- (BOOL) storePresetPresetname:(NSString *)presetname;  // Store options to a preset kAiVectorizeSuite.  Will overwrite an existing (unlocked) preset if names match.

@end



/*
 * Obsolete Names Suite
 */

// obsolete_properties
__attribute__((deprecated)) @interface IllustratorCCObsolete_properties : SBObject

@property (copy) NSArray *scalingObsoleteUseHorizontalScaleAndVerticalScale __attribute__((deprecated));  // character horizontal and vertical scaling factor expressed as a percentage (100 = 100%)
@property BOOL autoKerningObsoleteUseKerningMethod __attribute__((deprecated));  // use font's built-in kerning information?
@property IllustratorCCECHd directionObsoleteUseBaselineDirection __attribute__((deprecated));  // controls the direction of characters in a vertical text block
@property BOOL pixelAspectRatioCorrection __attribute__((deprecated));  // adjust imported images which have a non-square pixel aspect ratio
@property BOOL japaneseFileFormatObsolete __attribute__((deprecated));  // save using Japanese version of file format (versions 3 - 5 only) ( default: false )
@property BOOL japaneseFileFormatObsolete __attribute__((deprecated));  // save using Japanese version of file format (versions 3 - 5 only) ( default: false )
@property BOOL nestedLayers __attribute__((deprecated));  // preserve nested layers when exporting ( default: true )
@property BOOL hiddenLayers __attribute__((deprecated));  // output hidden layers when exporting ( default: false )
@property BOOL slices __attribute__((deprecated));  // preserve slices in exported document ( default: true )
@property BOOL imageMap __attribute__((deprecated));  // for RGB documents, preserve image maps in ImageReady 3.0 format ( default: true )
@property BOOL compoundShapes __attribute__((deprecated));  // export compound shapes as shape layers ( default: true )
@property IllustratorCCEPSc compatibility __attribute__((deprecated));  // what Photoshop file format to create ( default: Photoshop 8 )
@property BOOL generateHTML __attribute__((deprecated));  // export as HTML file ( default: false )
@property IllustratorCCEOFl flattenOutput __attribute__((deprecated));  // choose whether to preserve artwork appearance or editability during export ( default: preserve appearance )

- (void) delete;  // Remove an element from an object
- (SBObject *) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to;  // Move object(s) to a new location

@end

